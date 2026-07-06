<p align="center">
<img width="700" height="350" alt="Project_Hail_Fally (1)" src="https://github.com/user-attachments/assets/0bb047fa-7d10-4c2d-ad13-a124f2b0a780" />
</p>

One day during our final exam, it rained cats and dogs; therefore, our school rescheduled the exam for another day. I was very delighted, so I invited my friend Omar to watch a movie instead of studying for the exam. When he arrived, he brought me a USB containing the film Project Hail Mary because it had recently been released. Throughout the movie, I was surprised by the spaceship Hail Mary, due to its advanced capabilities, which made me want to create my own Hail Mary.

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

### Schematic
<img width="817" height="658" alt="image" src="https://github.com/user-attachments/assets/e2a766a7-26a7-4ec1-bd9a-412609489dca" />

## 📖 Magazine 
<p align="center">
<img width="1345" height="1999" alt="Project Hail Fally (5)" src="https://github.com/user-attachments/assets/fa361271-ec5c-43dd-b7f7-a249eae0eaad" />
</p>

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

## 📱 App creation  
- The website used for making the application is MIT App Inventor.
- In the design screen, put the components to connect and the button you want, or that is shown in the app image in the image section.
- For the motions button, turn on the light and buzzer in the block you will summon the When Bluetooth clicks block, inside it puts the button, then the text or the letter you will write in the code.
- Display the message of getting over the limit for temperature and gas using the if block, then put the = block inside it where the condition in the code happens, the message will appear in the app.
- Finally, for the speaking button, use an if block and summon the word you will say, and write a text that the app will convert your words to code text.
- **Codeblock is the logic code and the design for the mobile app, which is used to control the robot via the app**
- **Firmware is the code in the microcontroller to control the components, such as motors**

## ⚒️ How to build step-by-step
1. Using the bill of materials (BOM) table to bring all the components of the project.
2. Utilizing the CAD file to print the 3D design in the installation section.
3. Printing the PCB from the files as well as the installation section by sending it to a factory and determining the board dimension 7020x3430 mil.
4. Connect your laptop to the microcontroller ATMEGA328P-U and transfer the code to it, where you will find the code in the firmware folder.
5. Integrated the components with the 3D design, including servo motors and an ultrasonic sensor, and an LCD to the pin headers using the Wiring Diagram & Pinouts section.
6. Putting the board inside its holder, then between the two layers, place the final connection of the header pins with the servo motors, the ultrasonic sensor, and the LCD, thus the prototype will be finished.

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

## ⬇️ Project Links & Installing 
[3D design](https://cad.onshape.com/documents/1a12a7a63424902c2d429a8a/w/e03009ff667dd449c4461ee8/e/06985d8128c2bdd529ca1e70?renderMode=0&uiState=6a232fa71736c3f3fc3942b8)
<br>[PCB design link](https://u.easyeda.com/join?type=project&key=029c9c63b4f82ed72b2982c6df39406c&inviter=98e19a895f66457f9303f5d792545d7f)
<br>[BOM.csv](https://github.com/user-attachments/files/28831487/BOM.csv)







