/*
    Project name : Ultrasonic Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : 
*/

const int floatSwitchPin = 2; // Digital pin connected to the float switch
const int ledPin = 13; // Digital pin connected to the LED

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(floatSwitchPin, INPUT); // Set float switch pin as input
  pinMode(ledPin, OUTPUT); // Set LED pin as output
}

void loop() {
  int waterLevel = digitalRead(floatSwitchPin); // Read float switch value
  
  // Print water level to Serial Monitor
  if (waterLevel == HIGH) {
    Serial.println("Water Level: HIGH (Float switch triggered)");
    digitalWrite(ledPin, HIGH); // Turn on LED if float switch is triggered
  } else {
    Serial.println("Water Level: LOW (No water)");
    digitalWrite(ledPin, LOW); // Turn off LED if no water is detected
  }
  
  delay(1000); // Add a delay to avoid flooding the Serial Monitor with messages
}
