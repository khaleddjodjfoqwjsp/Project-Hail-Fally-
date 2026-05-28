#include <LiquidCrystal.h>  // library  to bring the LCD
#include <SoftwareSerial.h>  // libarary to connect the serial to be able to link the bluetooth 
#define buzzerPin 3  // determine the pin that the buzzer connected with 
#define gasPin A1  // determine the pin that the gas sensor connected with 
#define lightPin A4  // determine the pin that the LED connected with 
LiquidCrystal lcd(9, 8, 7, 6, 5, 4);  // determine the pins that the LCD sides connected with 
int celsius;  // determine the change in heat that keep the temperature in celsius measure 
int trigPin = A3;  // determine the pin that the trig side of the ultrasonic sensor connected with 
int echoPin = A2;  // determine the pin that the echo side of the ultrasonic sensor connected with 
long duration;  // variable that show the time by microseconds
int distanceCm;  // variable show the distance in cm 
char t;  // variable of letter kind to receive the order via mobile bluetooth 

unsigned long previousMillis = 0;  // variable to keep the last time (smart time cycle)
const long fiveMinutes = 300000;  // determine the time whihc is 5 minutes or 300000 milliseconds 
const long halfMinute = 30000;  // determine half seconds or 30000 milliseconds 

void setup() {
  Serial.begin(9600);  // intial connection connection between the bluetooth and the project 

  pinMode(trigPin, OUTPUT);  // trig side sends waves 
  pinMode(echoPin, INPUT);  // echo side receives the waves that the trig side send if it is reflected 
  lcd.begin(16, 2);  // LCD size is 16x2 
  pinMode(buzzerPin, OUTPUT);  // buzzer function sends sound as an output 
  pinMode(13, OUTPUT);  // left motors forward 
  pinMode(12, OUTPUT);  // left motors reverse 
  pinMode(11, OUTPUT);  // right motors forward 
  pinMode(10, OUTPUT);  // right motors reverse 

  lcd.setCursor(0,0);  // make the LCD to write in the first colume and first line 
  lcd.print("Calibrating");  // LCD starts with display the word Calibrating
  for(int i = 0; i < 10; i ++) { 
    if(i == 4) {
      lcd.setCursor(0, 1);  // repeat the print until in the fourth transfer to line two 
      lcd.print(".");  // print a dot 
    }
    else lcd.print(".");
    delay(500);  // wait 0.5 seconds between the dots and the another 
  }
  lcd.setCursor(5, 1);  // determine the location of the sentence to print done 
  lcd.print("done");
  delay(1000);
  lcd.clear();  // delete all things on the LCD and make it clean 
  lcd.setCursor(1, 0);
  lcd.print("Hail Fally Active");  // print that the project is now ready 
  delay(1500);
  lcd.clear();
}
void loop() {
  digitalWrite(trigPin, LOW);  //  the trig side is off to ensure everything is clear 
  delayMicroseconds(2);  
  digitalWrite(trigPin, HIGH);  // after two microseconds the trig side sends the wave 
  delayMicroseconds(10);  // make the wave continue to 10 microseconds 
  digitalWrite(trigPin,LOW);  
  duration = pulseIn(echoPin,HIGH);  // the time that takes for the wave return back
  distanceCm = duration*0.034/2;  // equition to convert the time to distance in cm
  lcd.setCursor(0, 0);  // print in this colume and line 
  lcd.print("Dist: ");  // print the word Dist in fornt of it the distance in cm value 
  lcd.print(distanceCm);
  lcd.print("   cm");  // display the distance in cm and its value 
  Serial.print(distanceCm);
  Serial.println();
  if(Serial.available()) {  // send the value of the distance to the mobile via bluetooth
    t = Serial.read();
    Serial.println(t);  // read the letter to ensure and control 
  }
  if(t == 'F') {  // move forward by the two motors that go forward( saying go in the app means F as well thus it will move using the voice via app)
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
  }
  else if( t == 'B') {  // move reverse 
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
  }
  else if( t == 'L') {  // turn right( left side by the wheels go right )
    digitalWrite(11, HIGH);
  }
  else if(t == 'R') {  // turn left( right side by the wheels go right )
    digitalWrite(13, HIGH);
  }
  else if( t == 'S') {  // stop where all motors dont move 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  else if( t == 'O') {  // O refers to turn on the light via app
    digitalWrite(lightPin, HIGH);
  }
  else if( t == 'H') {  // H refers to turn on the buzzer that will produce sounds via click the button in the app 
    digitalWrite(buzzerPin, HIGH);
  }
  else if( t == 'X') {  // X refers to turn off all function including light and buzzer 
    digitalWrite(lightPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  int gasSensor = analogRead(gasPin);
  celsius = map(((analogRead(A0)- 20)*3.04), 0,1023, -40, 125);  // reading the sensors values including gas and temperature sensors and convert the convert the temprature to celsius 
  unsigned long currentMillis = millis();  // the time from starting the arduino to work  

if(gasSensor > 350) {  
  digitalWrite(buzzerPin, HIGH);  // if the gas value exceeds 350 so the buzzer will turn on and make sounds  
  lcd.setCursor(0,0);
  lcd.print("Gas Alert!       ");  // LCD display that there is a gas disaster 
  lcd.setCursor(0, 1);
  lcd.print("Value:    "); lcd.print(gasSensor);  // display the value of the gas in this time 
  Serial.println("GAS_DANGER");  // to warn in the mobile app that there is gas problem 
}
else if(celsius > 40) {
  lcd.setCursor(0, 0);
  lcd.print("Temp High!       ");  // when temperature is higher than 40 the LCD display Temp High to warn the client
  lcd.setCursor(0, 1);
  lcd.print("Temp:    ");  // the value of the temperature 
  Serial.println("TEMP_DANGER");  // to warn in the mobile that the temprature is so high 
}
else {
  if (t != 'H')  {
    digitalWrite(buzzerPin, LOW);  // buzzer turn off 
  }
  Serial.print("STABLE");  // if you dont put anything or nothing is going on thus the mobile app show stable 
  unsigned long cycleTime = currentMillis % ( 2 * (fiveMinutes + halfMinute));  // determine the tiem for each gas and temprature sensors to display in a cycle 
  if (cycleTime < halfMinute) {  // the first half in the full cycle 
    lcd.setCursor(0, 0);
    lcd.print("Temp Display    ");  // LCD show that its now the signal for the temperature 
    lcd.setCursor(0, 1);
    lcd.print("Temp:    "); lcd.print(celsius); lcd.print("C    ");  // print the temperature value in celsius
  }
  else if (cycleTime < halfMinute) {  // its time for the gas to display in the LCD 
    lcd.setCursor(0, 0);
    lcd.print("Gas Display    ");  // print that the gas value is now detected 
    lcd.setCursor(0, 1);
    lcd.print("Value:    "); lcd.print(gasSensor); lcd.print("        ");  // show the gas value 
  }
  else {
    lcd.setCursor(0, 0);
    lcd.print("Running... ");  // between the 5 minutes between the two sensors, this time will be for the ultrasonic to show the distance 
    lcd.setCursor(0, 1); 
    lcd.print("Dist:   "); lcd.print(distanceCm); lcd.print(" cm    ");  // print the distance value in cm 
  }
}
delay(100);  // a little delay for any issue 
}