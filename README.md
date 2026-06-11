<p align="center">
<img width="700" height="350" alt="Project_Hail_Fally (1)" src="https://github.com/user-attachments/assets/0bb047fa-7d10-4c2d-ad13-a124f2b0a780" />
</p>

One day during our final exam, it rained cats and dogs; therefore, our school rescheduled the exam for another day. I was very delighted, so I invited my friend Omar to watch a movie instead of studying for the exam. When he arrived, he brought me a USB containing the film Project Hail Mary because it had recently been released. Throughout the movie, I was surprised by the spaceship Hail Mary, due to its advanced capabilities, which made me want to create my own Hail Mary.

## ⚽ purposes
- The project was inspired by the Project Hail Mary movie for educational purposes only(also because I love it), where I dreamed of creating the same spaceship as the film.
- There are many cases of individuals who have passed away due to extreme temperatures or harmful gas emissions, so the project can reach the case before it causes a miserable condition.
- Besides the moral missions, the robot can also be used for fun by making it an automatic game.
- It can be your friend, your savior, or your funny game that also received orders through voice.

## 🧾 Description
- The project called Project Hail Mary is inspired by the film Project Hail Mary.
- It is a robot created to do functions similar to the Hail Mary ship in the movie, including rescue, taking orders, moving automatically, or controlling it via an application.
- The robot moves with 4 legs using 8 servo motors connected with the PCA9685 module, which gathers all eight servo motors.
- The core of the project looks like a sandwich where the two layers close the circuit or the components in general.
- The circuit in the middle of the robot is its brain, where it gives the order for all devices by the Atmega328p.
- In the top layer, there is the robot head, which consists of two eyes for the ultrasonic sensor and a hole for the gas sensor; moreover, a rectangular place for the LCD that will display all the sensors read, including temperature, gas, and distance.
- Ultimately, there is a Bluetooth module used for sending or receiving orders from the mobile app, including controlling the robot's motion, turning on the light or warning for temperature or gas, or displaying distance or given orders from voice.


## 🧑‍🔬 Usage
1. The Project Hail Fally contributes to the region in multiple ways 
- The robot scans the place to ensure the temperature is suitable in the location and the absence of toxic gases.
- If it senses dangerous reading, it will warn you before something bad happens.
- Using for dark places where you can turn on the light in the robot via the app.
- Explore places and save their data, displaying it in the LCD or app.
2. Despite the automatic functions, you can also control it
- Moving the robot forward, backward, left, and right using the app for having fun or exploring new locations.
- The light and buzzer can be turned on by yourself via the app as well.


## 🛠️ Bill of Materials (BOM)

| Component | Quantity | Price | Purchase link |
| :--- | :---: | :--- | :--- |
| **ATMEGA328P-U** | 1 | 3.63$ | https://free-electronic.com/product/atmega328p-u/ |
| **Ultrasonic sensor** | 1 | 0.77$ | https://free-electronic.com/product/ultrasonic-sensor-hc-sr04/ |
| **Bluetooth Module** | 1 | 3.73$ | https://free-electronic.com/product/bluetooth-module-hc-05-6pin-button/ |
| **LCD 16x2** | 1 | 2.2$ | https://free-electronic.com/product/lcd1602-iic-i2c-blue-backlight/ |
| **Battery Holder ( 9V )** | 1 | 0.23$ | https://free-electronic.com/product/battery-holder-9v/ |
| **Battery** | 2 | 4.78$ | https://free-electronic.com/product/9v-varta-longlife-power-alkaline-battery/ |
| **MQ-2 Gas Sensor** | 1 | 1.34$ | https://free-electronic.com/product/mq-2-smoke-gas-lpg-butane-hydrogen-sensor-module/ |
| **DHT22  Temp Sensor** | 1 | 2.87$ | https://free-electronic.com/product/dht22-digital-humidity-temperature-sensor/ |
| **Buzzer Module** | 1 | 0.48$ | https://free-electronic.com/product/passive-buzzer-module/ |
| **Breadboard** | 2 | 0.48$ | https://free-electronic.com/product/breadboard-soldless-400-tie-points/ |
| **Voltage Regulator** | 2 | 6.68$ | https://free-electronic.com/product/dc-voltage-regulator-buck-converter-6-36v-to-1-25-32v-5a-constant-current-voltage-mppt-solar-controller/ |
| **Servo Motor SG90** | 1 | 1.62$ | https://free-electronic.com/product/servo-motor-sg90/ |
| **Crystal 2 PIN (16 MHz)** | 1 | 0.076$ | https://free-electronic.com/product/crystal-2-pin-16-mhz/ |
| **Capacitor (22pF)** | 2 | 0.019$ | https://free-electronic.com/product/ceramic-capacitor-22pf-50v/ |
| **Capacitor (100pF)** | 2 | 0.019$ | https://free-electronic.com/product/ceramic-capacitor-100nf-50v/ |
| **Resistor (220 ohm)** | 10 | 0.29$ | https://free-electronic.com/product/resistor-220-ohm-3w/ |
| **MG90S Servo motor** | 8 | 23.16$ | https://free-electronic.com/product/servo-motor-metal-gear-mg90s/ |
| **Pin Header 1x3** | 8 | 0.077$ | https://free-electronic.com/product/pin-header-male-2-54mm-1x3-straight/ |
| **Pin Header 1x4** | 2 | 0.058$ | https://www.ram-e-shop.com/shop/ph35-1x4-female-ph35-pin-header-female-1x4-straight-2-54mm-6976?category=52 |
| **PCA9685** | 1 | 3.96$ | https://free-electronic.com/product/servo-driver-module-16-channel-pca9685/ |
| **Total Price** | | 56.469$ | |

## 🔌 Wiring Diagram & Pinouts

* **LCD (16x2):** RS -> Pin 9, E -> Pin 8, DB4 -> Pin 7, DB5 -> Pin 6, DB6 -> Pin 5, DB7 -> Pin 4
* **MQ-2 Gas Sensor:** AO -> A1, DO -> Pin 3
* **Buzzer:** OUT -> Pin 2
* **Servo Motor:** PWM -> PWM 8
* **Ultrasonic Sensor:** Trig -> A3, Echo -> A2
* **LM35 Temp Sensor:** VOUT -> A5
* **Bluetooth Module:** TXD -> Pin 0
* **PCA9685:** SDA -> A4, SAL -> A5
* **Servo motor 1:** PWM -> PWM 0
* **Servo motor 2:** PWM -> PWM 1
* **Servo motor 3:** PWM -> PWM 2
* **Servo motor 4:** PWM -> PWM 3
* **Servo motor 5:** PWM -> PWM 4
* **Servo motor 6:** PWM -> PWM 5
* **Servo motor 7:** PWM -> PWM 6
* **Servo motor 8:** PWM -> PWM 7

## 🤖 Code
```cpp
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
```

## 📱 App creation  
- The website used for making the application is MIT App Inventor.
- In the design screen, put the components to connect and the button you want, or that is shown in the app image in the image section.
- For the motions button, turn on the light and buzzer in the block you will summon the When Bluetooth clicks block, inside it puts the button, then the text or the letter you will write in the code.
- Display the message of getting over the limit for temperature and gas using the if block, then put the = block inside it where the condition in the code happens, the message will appear in the app.
- Finally, for the speaking button, use an if block and summon the word you will say, and write a text that the app will convert your words to code text.

## ⚒️ How to build step-by-step
1. Using the bill of materials (BOM) table to bring all the components of the project.
2. Utilizing the CAD file to print the 3D design in the installation section.
3. Printing the PCB from the files as well as the installation section by sending it to a factory and determining the board dimension 7020x3430 mil.
4. Integrated the components with the 3D design, including servo motors and an ultrasonic sensor, and an LCD.
5. Putting the board inside its holder, then between the two layers, place the final connection of the header pins with the servo motors, the ultrasonic sensor, and the LCD, thus the prototype will be finished.

## 🔬 Test Plan 
### **The test plan is applied to ensure the stability and efficiency of the prototype, including hardware and software.**
1. The prototype turns on, and electricity is distributed to all the components without unstable disconnection.
2. To verify the strength of the prototype by putting an object of 3 kg in the top layer without it collapsing.
3. The motors themselves will be tested where they rely on the angles to move, thus ensuring the ability of the motors to follow the angle of motion accurately.
4. Finally, to check the entire prototype interaction and ensure all the materials interact perfectly together, where there are no errors in one component due to another one.


## 🗣️ Motivation
- What motivated me behind the scenes and inspires me a lot is the fact that the majority of the robots, specifically in Egypt, are not well-built and traditional due to heavy reliance on wheeled robots, which have issues with mobility and fixability in harsh environments like Egypt.
- Despite the project being inspired by a movie and a main reason that fills me with passion, I have always thought of setting up a new thing from scratch in Egypt since I was young.
- Creating a project that can fit the harsh changes in multiple regions instead of traditional design and a cost-effective robot so it won't be a waste of money.


## 📷 Project Images
### Project Structure
<img width="991" height="567" alt="33344654ec924b7983657241d97b29c6" src="https://github.com/user-attachments/assets/266e8e5f-74f5-4a1b-bea3-54ae8397c14d" />

### Board Holder
<img width="564" height="996" alt="5a0d528c62c5422e9247037c2c347e8f" src="https://github.com/user-attachments/assets/d43f2b53-eb34-4dc8-b5fe-52fd8362d551" />

### pcb
<img width="718" height="408" alt="image" src="https://github.com/user-attachments/assets/111c8cda-d971-45ba-880d-0195ab23be96" />

### Project App
<img width="426" height="663" alt="image" src="https://github.com/user-attachments/assets/a967f007-35de-4704-9386-04a5964e381c" />

### App blocks 
<img width="1592" height="587" alt="image" src="https://github.com/user-attachments/assets/2784c6be-74e8-4fd3-9022-6e3693e0cd52" />

## 📖 Magazine 
<p align="center">
<img width="1345" height="1999" alt="Project Hail Fally (4)" src="https://github.com/user-attachments/assets/9746395b-fccc-454a-bbbb-d2fd49ac7d2c" />
</p>

## ⬇️ Project Links & Installing 
[3D design](https://cad.onshape.com/documents/1a12a7a63424902c2d429a8a/w/e03009ff667dd449c4461ee8/e/06985d8128c2bdd529ca1e70?renderMode=0&uiState=6a232fa71736c3f3fc3942b8)
<br>[PCB design link](https://u.easyeda.com/join?type=project&key=029c9c63b4f82ed72b2982c6df39406c&inviter=98e19a895f66457f9303f5d792545d7f)
<br>[BOM.csv](https://github.com/user-attachments/files/28831487/BOM.csv)







