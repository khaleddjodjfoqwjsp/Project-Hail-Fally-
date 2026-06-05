# Project Hail Fally 
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


### 🛠️ Bill of Materials (BOM)

| Component | Quantity | Price | Purchase link |
| :--- | :---: | :--- | :--- |
| **ATMEGA328P-U** | 1 | 3.63$ | https://free-electronic.com/product/atmega328p-u/ |
| **Ultrasonic sensor** | 1 | 0.77$ | https://free-electronic.com/product/ultrasonic-sensor-hc-sr04/ |
| **Bluetooth Module** | 1 | 3.73$ | https://free-electronic.com/product/bluetooth-module-hc-05-6pin-button/ |
| **LCD 16x2** | 1 | 1.24$ | https://free-electronic.com/product/lcd1602-blue-backlight-with-soldering-pin-header/ |
| **L298 Motor Drive** | 1 | 1.44$ | https://free-electronic.com/product/l298-motor-driver-module/ |
| **DC motor** | 2 | 0.76$ | https://hdelectronicseg.com/product/dc-motor-9v/ |
| **Battery Holder ( 9V )** | 1 | 0.23$ | https://free-electronic.com/product/battery-holder-9v/ |
| **Battery** | 1 | 2.39$ | https://free-electronic.com/product/9v-varta-longlife-power-alkaline-battery/ |
| **MQ-2 Gas Sensor** | 1 | 1.34$ | https://free-electronic.com/product/mq-2-smoke-gas-lpg-butane-hydrogen-sensor-module/ |
| **DHT22  Temp Sensor** | 1 | 2.87$ | https://free-electronic.com/product/dht22-digital-humidity-temperature-sensor/ |
| **Buzzer Module** | 1 | 0.48$ | https://free-electronic.com/product/passive-buzzer-module/ |
| **Breadboard** | 2 | 0.48$ | https://free-electronic.com/product/breadboard-soldless-400-tie-points/ |
| **Voltage Regulator** | 1 | 3.34$ | https://free-electronic.com/product/dc-voltage-regulator-buck-converter-6-36v-to-1-25-32v-5a-constant-current-voltage-mppt-solar-controller/ |
| **Servo Motor SG90** | 1 | 1.62$ | https://free-electronic.com/product/servo-motor-sg90/ |
| **Crystal 2 PIN (16 MHz)** | 1 | 0.076$ | https://free-electronic.com/product/crystal-2-pin-16-mhz/ |
| **Capacitor (22pF)** | 2 | 0.019$ | https://free-electronic.com/product/ceramic-capacitor-22pf-50v/ |
| **Capacitor (100pF)** | 2 | 0.019$ | https://free-electronic.com/product/ceramic-capacitor-100nf-50v/ |
| **Resistor (220 ohm)** | 10 | 0.29$ | https://free-electronic.com/product/resistor-220-ohm-3w/ |

---

### 🔌 Wiring Diagram & Pinouts

* **LCD (16x2):** RS -> Pin 9, E -> Pin 8, DB4 -> Pin 7, DB5 -> Pin 6, DB6 -> Pin 5, DB7 -> Pin 4
* **Motor Drive:** IN1 -> Pin 13, IN2 -> Pin 12, IN3 -> Pin 11, IN4 -> Pin 10
* **MQ-2 Gas Sensor:** AO -> A1, DO -> Pin 3
* **Buzzer:** OUT -> Pin 2
* **Servo Motor:** PWM -> A0
* **Ultrasonic Sensor:** Trig -> A3, Echo -> A2
* **LM35 Temp Sensor:** VOUT -> A5
* **Bluetooth Module:** TXD -> Pin 0

---

