/*
    Project name : Arduino Uno Water Level Sensor
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-water-level-sensor
*/

// Define the pin connected to the water level sensor
const int waterLevelSensorPin = 2;

void setup() 
{
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set the water level sensor pin as input
  pinMode(waterLevelSensorPin, INPUT);
}

void loop() {
  // Read the state of the water level sensor
  int waterLevelState = digitalRead(waterLevelSensorPin);

  // Print the water level sensor state to the Serial Monitor
  if (waterLevelState == HIGH) {
    Serial.println("Water detected");
  } else {
    Serial.println("No water detected");
  }

  // Add a small delay to avoid flooding the Serial Monitor
  delay(200);
}
