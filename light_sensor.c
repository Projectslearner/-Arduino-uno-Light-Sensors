/*
    Project name : Light Sensor
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-light-sensors
*/

const int sensorPin = A0; // Analog pin connected to the light sensor
const int ledPin = 13;    // Digital pin connected to the LED

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
  Serial.begin(9600);      // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the analog value from the sensor
  Serial.print("Sensor value: ");
  Serial.println(sensorValue); // Print the sensor value to the serial monitor
  
  if (sensorValue > 500) {     // Adjust the threshold value as needed
    digitalWrite(ledPin, HIGH); // Turn on the LED if the light is bright
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED if the light is dim
  }
  
  delay(500); // Delay for stability
}
