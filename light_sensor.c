/*
    Project name : Arduino Uno Light Sensor (LDR)
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-light-sensor-ldr
*/

const int ldrPin = A0;   // Analog pin connected to the LDR module

void setup() {
  Serial.begin(9600);    // Initialize serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(ldrPin);  // Read analog value from LDR

  Serial.print("Light Intensity: ");
  Serial.println(sensorValue);  // Print sensor value to Serial Monitor

  delay(1000);  // Delay for 1 second
}
