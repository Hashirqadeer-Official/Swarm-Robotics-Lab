#include<Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("Hello World from ESP32-S3");
}

void loop() {
  Serial.println("Running...");
  delay(1000);
}