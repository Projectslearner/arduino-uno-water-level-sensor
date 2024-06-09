### Water Level Detector using Float Switch

#### Project Overview

This project demonstrates how to use an Arduino Uno to detect the water level using a float switch. When the float switch is triggered by the presence of water, the Arduino turns on an LED to indicate a high water level. The digital output of the float switch is read by the Arduino to determine the water level.

#### Components Needed

1. **Arduino Uno**
2. **Float Switch**
3. **LED**
4. **Resistor (220 ohms)**
5. **Jumper Wires**

### Block Diagram



#### Instructions

1. **Circuit Setup:**
   - Connect the digital output pin of the float switch to digital pin 2 on the Arduino Uno.
   - Connect the positive (+) terminal of the LED to digital pin 13 on the Arduino through a current-limiting resistor (220 ohms).
   - Connect the negative (-) terminal of the LED to GND (ground) on the Arduino.
   - Ensure the float switch is installed in the water container in a way that it gets triggered when the water level rises.

2. **Initialization:**
   - Initialize serial communication at a baud rate of 9600 in the `setup()` function.
   - Set the float switch pin as an input and the LED pin as an output using the `pinMode()` function.

3. **Detect Water Level:**
   - Read the digital value from the float switch using the `digitalRead()` function.
   - Store the water level state (HIGH or LOW) in a variable for further processing.

4. **LED Indication:**
   - If the float switch is triggered (digital value is HIGH), turn on the LED by setting the LED pin to HIGH.
   - Print a message to the Serial Monitor indicating the water level status.
   - If no water is detected (digital value is LOW), turn off the LED by setting the LED pin to LOW.

5. **Adjustments:**
   - Adjust the position of the float switch to trigger at the desired water level.
   - Experiment with different delay times to control the frequency of water level readings.

#### Applications

- **Water Level Monitoring:** Monitor water levels in tanks, reservoirs, or sump pumps.
- **Home Automation:** Integrate with home automation systems to trigger alerts or actions based on water levels.
- **Aquariums and Ponds:** Monitor and control water levels in aquariums, ponds, or water features.

#### Notes

- Ensure that the float switch is installed securely and positioned correctly to accurately detect the water level changes.
- Use appropriate waterproofing measures if deploying the system in environments with potential water exposure.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner