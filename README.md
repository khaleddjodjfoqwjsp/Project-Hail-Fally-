<img width="350" height="350" alt="Project_Hail_Fally" src="https://github.com/user-attachments/assets/051788af-b4a4-4006-859f-4ef80a1b3684" />
One day during our final exam, it rained cats and dogs; therefore, our school rescheduled the exam for another day. I was very delighted, so I invited my friend Omar to watch a movie instead of studying for the exam. When he arrived, he brought me a USB containing the film Project Hail Mary because it had recently been released. Throughout the movie, I was surprised by the spaceship Hail Mary, due to its advanced capabilities, which made me want to create my own Hail Mary.

## ⚽ purposes
- Inspiring the goals of the project from the movie Project Hail Mary, which made me realize that we require robots like the Hail Mary spaceship.
- It saves many lives from extreme temperatures and toxic gas emissions, where thousands of individuals have died from them, particularly older people.
- It is an explorer and rescue robot that can be automatic or controlled via a controller system. 
- It is not only for the rescue behaviors; however, it can also be used for enjoying and receiving orders, such as saying orders, and it offers them rapidly.

## 🧾 Description
- It's a robot inspired by the movie Project Hail Mary to do similar functions, which obviously does stuff that clearly contributes to many important issues indoors.
- I couldn’t avoid mentioning the film that inspired me for the project from scratch, therefore I named it Project Hail Fally, where I replaced “Mary” with “Fally” because it refers to Fallout, which is a program that helps young people in hardware.
- The project contains sensors to detect the temperature and gas in the place and displays the readings on the LCD in the robot's head.
- It warns via buzzer whether the temperature or gas exceeds the safe limit, or in a mobile application, if you are far from the robot.
- Furthermore, the robot can move automatically on its own without colliding with the rough objects or be controlled via the mobile application for entertainment or exploring places you want it to reach.
- The robot is designed in a quadruped structure with four legs and eight servo motors to control the motion, which is the most familiar design to Rockey from Project Hail Mary.
- Moreover, one of the newest functions of this robot is that it can receive voice commands through the app to order; nevertheless, it applies them without any delays.

## 🧑‍🔬 Usage
1. The project will be used as a savior of the location, making multiple tasks.
- It preserves the people in the system from the danger of high temperature or toxic gases, such as increasing CO2 or decreasing oxygen.
- Lighting in the darkness with the light in the front of the robot. 
- Resolved the speak orders via app in a part of a second and did it rapidly.
-	Exploring the places and giving you their information 
2. Although it is used for exploring and rescue.
- It can also be used as a game that activates the brain, where the robot can be controlled via an app to have fun and discover things with it wherever you want. It is useful on this side.
-	You can turn on the light in the dark and activate the buzzer to make a sound all via the app, thus it has diversity while using it.

## 🛠️ Bill of Materials (BOM)

| Component | Quantity | Price | Purchase link |
| :--- | :---: | :--- | :--- |
| **ATMEGA328P-U** | 1 | 3.63$ | https://free-electronic.com/product/atmega328p-u/ |
| **Ultrasonic sensor** | 1 | 0.77$ | https://free-electronic.com/product/ultrasonic-sensor-hc-sr04/ |
| **Bluetooth Module** | 1 | 3.73$ | https://free-electronic.com/product/bluetooth-module-hc-05-6pin-button/ |
| **LCD 16x2** | 1 | 1.24$ | https://free-electronic.com/product/lcd1602-blue-backlight-with-soldering-pin-header/ |
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

## 📱 App creating 
-	Using the MIT App Inventor, make a new project to start the App.
- Firstly, put the Bluetooth in the screen where you can use the mobile to connect with the app.
- Secondly, creating four buttons for the motion direction involves forward, backward, left, and right, then in the blocks section to make the orders summon when the button is pressed (the name of the button, for example, forward), then get another block called call Bluetooth client send text finally bring the text block and connect it with them writing inside it the litter you will write in the code that the microcontroller can read for instance F, B, L, R. do this step with the rest of the buttons motion.
- Thirdly, for the motion, it is to create the auto mode button. It is the same as the regular buttons; however, it differs in the code, where you put the code with the function you need. For example, in the code I wrote, when I send M, then that means that the Auto mode, thus for the auto mode button, I will put in the text M.
- The same thing will happen when you turn on the light and buzzer, or turning them off.
- Moreover, in the code writing, when the gas or temperature exceeds the limit, then in the blocks using the if block, bring inside it the call Bluetooth client receive block = ( the thing you want to display on the screen when the condition happens. Do it with the temperature and gas, also for showing stability.
- For the speaking, summon a button, rewrite it to speak, and in blocks bring the speech after getting the text block further. Inside it puts an if block, the = block, then brings the result in the speech block, ultimately brings text, and puts inside it the word you will say
Finally, make as you did with previous orders, where you bring the call Bluetooth, send a text, and put the litter.
- All blocks exist in the images section.

## ⚒️ How to build step-by-step
1. Bringing all the material for the detailed use of the bill of material (BOM) section, including their price and purchase link.
2. Moreover, creating the CAD to life by printing the custom 3D design in the installation section or from files, then converting it to a physical prototype. For example, Fused Deposition Modeling (FDM) is used with PLA (Polylactic Acid) due to its durability, and it can withstand the heavy components.
3. Then, integrate all the materials, including linking the upper and lower parts of the robot, to ensure they fit. 
4. After finishing integrating the prototype, we will have two servo motors for each of the four legs, as shown in the 3D design.
5. Furthermore, we will print the PCB from the files or the installation section, which is the brain of the project.
6. While PCB is printing, we will create the holder of the board from the files or installation, then gather them together.
7. Then, put them inside the prototype and connect the wires of the headers pin to the ultrasonic sensor, LCD, and nine servo motors. 
8. Finally  run out the project and make the dream real.

## 🔬 Test Plan 
### **The test plan is applied to the project to ensure the durability and efficiency of the integrated materials, including hardware and software testing.**
1. *Mechanical structural testing:* which proves that the material can withstand the load even under high load, thus putting 2 kg on the top of the prototype to prove its durability.
2. *Electrical and power testing:* which tests the voltage stability and current, as well as the behavior of the motors, using a digital multimeter to ensure that stability for verifying the motors' strength. The spikes will be used to measure the torque of the motors.
3. *The kinetic and control test:* which determines whether the motor's angle is accurate or if some errors cause a problem, moreover, checks the delay of the project, and it works well.
4. *The full project test:* which ensures that the entire prototype connected well together without any errors, and the assembly is working correctly, which is the test that checks the final issues.

## 🗣️ Motivation
- These days, the majority of the robot-heavy relines on wheeled robots; however, their mobility and flexibility are critically limited to flat or harsh environments. In contrast, the real world requires a system that can withstand unstable environments or regions 
- The goal behind this project is to create a project that can fit the changes in the environment, flexible enough to adapt mechanically to unstructured environments where wheeled systems fail.
- The primary goal for Project Hail Fally is to design a well-affordable structure with varied functions, as well as a cost-effective robot that bridges the gap between the complicated design and physical realization.
- To develop a lightweight, durable, suitable 3D printed design that can withstand any habitat and cope with it.
- Cost efficiency project for those who have never had the chance to bring a robot ever, which is designed to compare to high-end industrial robots.

## 📷 Project Images
### Project Structure
<img width="991" height="567" alt="33344654ec924b7983657241d97b29c6" src="https://github.com/user-attachments/assets/266e8e5f-74f5-4a1b-bea3-54ae8397c14d" />

### Board Holder
<img width="378" height="660" alt="Screenshot_2026-06-05_231529-removebg-preview" src="https://github.com/user-attachments/assets/6a526f83-98ca-4880-9060-18a2a88cf97d" />

### pcb
<img width="718" height="408" alt="image" src="https://github.com/user-attachments/assets/111c8cda-d971-45ba-880d-0195ab23be96" />

### Project App
<img width="426" height="663" alt="image" src="https://github.com/user-attachments/assets/a967f007-35de-4704-9386-04a5964e381c" />

### App blocks 
<img width="1592" height="587" alt="image" src="https://github.com/user-attachments/assets/2784c6be-74e8-4fd3-9022-6e3693e0cd52" />

## 📖 Magazine 
<img width="482" height="719" alt="image" src="https://github.com/user-attachments/assets/40c28d2d-bf30-456c-8f24-e39351ced472" />
 
## ⬇️ Project Links & Installing 
[3D design](https://cad.onshape.com/documents/1a12a7a63424902c2d429a8a/w/e03009ff667dd449c4461ee8/e/06985d8128c2bdd529ca1e70?renderMode=0&uiState=6a232fa71736c3f3fc3942b8)
<br>[PCB design link](https://u.easyeda.com/join?type=project&key=029c9c63b4f82ed72b2982c6df39406c&inviter=98e19a895f66457f9303f5d792545d7f)
<br>[BOM.csv](https://github.com/user-attachments/files/28656010/BOM.csv)






