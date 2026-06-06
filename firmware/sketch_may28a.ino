#include <LiquidCrystal.h>  // library  to bring the LCD
#include <SoftwareSerial.h>  // libarary to connect the serial to be able to link the bluetooth 
#include <Wire.h>  // library to connect the shield 
#include <Adafruit_PWMServoDriver.h>  //libarry of the servo shield 
#include <NewPing.h>  // libarary for the ultrasonic sensor 
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();  // define the shield 

#define SERVOMIN 150
#define SERVOMAX 600  // define the servo limits 
#define trigPin A3  // determine the pin that the trig side of the ultrasonic sensor connected with 
#define echoPin A2  // determine the pin that the echo side of the ultrasonic sensor connected with 
#define maximum_distance 200  // define the maximum distance which will be used lately 
#define buzzerPin 2  // determine the pin that the buzzer connected with 
#define gasPin 3  // determine the pin that the gas sensor connected with

LiquidCrystal lcd(9, 8, 7, 6, 5, 4);  // determine the pins that the LCD sides connected with 

const int ledPin = A4;  // determine the pin for the LED which will be used for lighting 

int celsius;  // determine the change in heat that keep the temperature in celsius measure 

boolean goesForward = false;  // when the robot run out, do not goes forward immediately 
int distance = 100;  // intial distance 
NewPing sonar(trigPin, echoPin, maximum_distance);  // define the sides of the ultrasonic sensor by using the libarary 
boolean mazeMode = false;  // when the robot run out, the Auto mode is not turn on yet 
int angleToPulse(int angle) {
  return map( angle, 0, 180, SERVOMIN, SERVOMAX);  // function contributing to convert the angle to something that the shield can understand
}

                // define the prototypes where each has the same function as its name 
int readPing();
int lookRight();
int lookLeft();
void moveStop();
void moveForward();
void moveBackward();
void turnRight();
void turnLeft();

char t;  // variable of letter kind to receive the order via mobile bluetooth 

unsigned long previousMillis = 0;  // variable to keep the last time (smart time cycle)
const long fiveMinutes = 300000;  // determine the time whihc is 5 minutes or 300000 milliseconds 
const long halfMinute = 30000;  // determine half seconds or 30000 milliseconds 

void setup() {

  Serial.begin(9600);  // intial connection connection between the bluetooth and the project 
  pwm.begin();
  pwm.setPWMFreq(50);  // starting the motors with 50 frequency  

  moveStop();
  pwm.setPWM(8, 0, angleToPulse(115));  // deirect the servo motor for the angle of 115 degree
  delay(2000);  // takes 2 seconds to make the servo take its place 

  distance = readPing();  // take the first read to update the virable 
  delay(100);  // delay 0.1 seconds 
  distance = readPing();  // take the second read to update 
  delay(100);
  distance = readPing();
  delay(100);
  distance = readPing();
  delay(100);

  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);  // buzzer function sends sound as an output
  lcd.begin(16, 2);  // LCD size is 16x2 
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
  int distanceRight = 0;  // detect the right distance and save it in every loop 
  int distanceLeft = 0;  // detect the right distance and save it in every loop 
  delay(50);  // short delay 
  distance = readPing();  // saving the distance in the ultrasonic sensor and use them lately 

  lcd.setCursor(0, 0);  // print in this colume and line 
  lcd.print("Dist: ");  // print the word Dist in fornt of it the distance in cm value 
  lcd.print(distance);
  lcd.print("   cm");  // display the distance in cm and its value 
  Serial.print(distance);
  Serial.println();
  if(Serial.available()) {  // send the value of the distance to the mobile via bluetooth
    t = Serial.read();
    Serial.println(t);  // read the letter to ensure and control 
  }
  if(t == 'M') {
    mazeMode = true;  // when put Auto mode in the app which define with varible M it will turn on the mazeMode 
  }
  else if(t == 'S') {
    mazeMode = false;
    moveStop();
  }
  if(mazeMode == true) {
    if(distance >= 40) {  // in the mazeMode or Auto mode if the distance is higher than 40 the robot will go forwarad without any problems 
      moveForward();
    }
    else {  // if the distance lower than 40 another road will the robot take 
      moveStop(); 
      delay(300);
      moveBackward();  // firstly it will stop then turn back then stop 
      delay(400);
      moveStop();

      distanceRight = lookRight();
      delay(300);
      distanceLeft = lookLeft();  // secondly it will look right and save the distance then look left and save the distance 
      delay(300);
      if(distanceRight > distanceLeft) {
        turnRight();
        moveForward();  // if the save right distance higher than the save left distance it will go right 
      }
      else if(distanceLeft > distanceRight) {
        turnLeft();
        moveForward();  // if the save right distance higher than the save left distance it will go right 
      }
    }
  }
  else {
  if(t == 'F') {  // move forward by the two motors that go forward( saying go in the app means F as well thus it will move using the voice via app)
  moveForward();
  }
  else if( t == 'B') {  // move reverse 
  moveBackward();
  }
  else if( t == 'L') {  // turn right( left side by the wheels go right )
    turnLeft();
  }
  else if(t == 'R') {  // turn left( right side by the wheels go right )
    turnRight();
  }
  }
  if( t == 'H') {  // H refers to turn on the buzzer that will produce sounds via click the button in the app 
    digitalWrite(buzzerPin, HIGH);
  }
  else if( t == 'X') {  // X refers to turn off all function including light and buzzer 
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }
  else if(t == 'O') {  // O refers to turn on the light 
    digitalWrite(ledPin, HIGH);
  }
  int gasSensor = analogRead(gasPin);
  celsius = map(((analogRead(A5)- 20)*3.04), 0,1023, -40, 125);  // reading the sensors values including gas and temperature sensors and convert the convert the temprature to celsius 
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
  lcd.print(celsius);
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
    lcd.print("Dist:   "); lcd.print(distance); lcd.print(" cm    ");  // print the distance value in cm 
  }
}
delay(100);  // a little delay for any issue 
  }

int readPing() {
   delay(70);  // a little delay to avoid collision between the waves 
   int cm = sonar.ping_cm();  // send a wave and detect the distance now 
   if (cm == 0) {  // the sensor gives 0 if the rought object is so far from the robot
    cm = 250;  // thus make the seafy distance is 250cm 
     }
     return cm;  // return the distance that the sensor detect 
    }

  int lookRight() {  // function for detecting the right distance 
    pwm.setPWM(8, 0, angleToPulse(60));  // direct the servo motor in angel of 60 degree 
    delay(500);
    int dist = readPing();  // save the right distance 
    delay(100);
    pwm.setPWM(8, 0, angleToPulse(115));  // return the servo to its original angle 
    return dist;  // return the distance that the sensor detect in right 
  }
    int lookLeft() {  // function for detecting the left distance 
    pwm.setPWM(8, 0, angleToPulse(170));  // direct the servo motor in angel of 170 degree
      delay(500);
      int dist = readPing();  // save the left distance 
      delay(100);
      pwm.setPWM(8,0, angleToPulse(115));  // return the servo to its original angle 
    return dist;  // return the distance that the sensor detect in right 
    }
  

   void moveStop() {  // function for stoping the robot 
   pwm.setPWM(0, 0, angleToPulse(90));
   pwm.setPWM(1, 0, angleToPulse(90));
   pwm.setPWM(2, 0, angleToPulse(90));
   pwm.setPWM(3, 0, angleToPulse(90));
   pwm.setPWM(4, 0, angleToPulse(90));  // making all the servo motors in the 90 degrees angle due to holding them stop 
   pwm.setPWM(5, 0, angleToPulse(90));
   pwm.setPWM(6, 0, angleToPulse(90));
   pwm.setPWM(7, 0, angleToPulse(90));  
   goesForward = false;
  }
  void moveForward() {  // function for going forward 
  goesForward = true;  // uper legs move and therefore the lower leg will move too
  pwm.setPWM(2, 0, angleToPulse(70));  //  the oppsite two legs( forward left and backward right) move together 
  pwm.setPWM(3, 0, angleToPulse(60));  // the upper motors(2, 5) and lower motors(3, 4)
  pwm.setPWM(5, 0, angleToPulse(70));
  pwm.setPWM(4, 0, angleToPulse(60));  
  delay(250);

  pwm.setPWM(2, 0, angleToPulse(90));  // return them to the regular state to pull the body 
  pwm.setPWM(3, 0, angleToPulse(90));
  pwm.setPWM(5, 0, angleToPulse(90));
  pwm.setPWM(4, 0, angleToPulse(90));
  delay(250);

  pwm.setPWM(0, 0, angleToPulse(110));  // the other two legs(forward right and backward left) move together
  pwm.setPWM(1, 0, angleToPulse(120));  // upper motors(0, 6) lower motors(1, 7)
  pwm.setPWM(6, 0, angleToPulse(110));
  pwm.setPWM(7, 0, angleToPulse(120));
  delay(250);

  pwm.setPWM(0, 0, angleToPulse(90));  // return them to the regular state to pull the body 
  pwm.setPWM(1, 0, angleToPulse(90));
  pwm.setPWM(6, 0, angleToPulse(90));
  pwm.setPWM(7, 0, angleToPulse(90));
  delay(250);
  }
  void moveBackward() {  // function for backward 
  goesForward = false;  // same as the forward however, change the goesForward = true to = false 
  pwm.setPWM(2, 0, angleToPulse(110));  // change the angles only between the two lines 
  pwm.setPWM(3, 0, angleToPulse(120));
  pwm.setPWM(5, 0, angleToPulse(110));
  pwm.setPWM(4, 0, angleToPulse(120));
  delay(250);
  pwm.setPWM(2, 0, angleToPulse(90));
  pwm.setPWM(3, 0, angleToPulse(90));
  pwm.setPWM(5, 0, angleToPulse(90));
  pwm.setPWM(4, 0, angleToPulse(90));
  delay(250);
  pwm.setPWM(0, 0, angleToPulse(70));
  pwm.setPWM(1,0, angleToPulse(60));
  pwm.setPWM(6,0, angleToPulse(70));
  pwm.setPWM(7,0, angleToPulse(60));
  moveStop();  // instead of writing it again i use the function of stop
  delay(250);
  }
  void turnRight() {  // function for turning the robot to the right
  pwm.setPWM(0, 0, angleToPulse(70));  // change the angle to 70 degrees which is the rihgt of the servo 
  pwm.setPWM(2, 0, angleToPulse(70));
  pwm.setPWM(4, 0, angleToPulse(70));
  pwm.setPWM(6, 0, angleToPulse(70));
  delay(300);
  moveStop();  // using it to pull the body 
  }
  void turnLeft() {  // function for turning the robot to the left 
  pwm.setPWM(0, 0, angleToPulse(110));   // change the angle to 110 degrees which is the left of the servo 
  pwm.setPWM(2, 0, angleToPulse(110));
  pwm.setPWM(4, 0, angleToPulse(110));
  pwm.setPWM(6, 0, angleToPulse(110));
  delay(300);
  moveStop();  // using it to pull the body 
  }