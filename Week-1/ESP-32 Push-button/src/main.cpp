#include <Arduino.h>

#define BUTTON_PIN 14

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == LOW) {
    Serial.println("Button Pressed means low Voltage");
  } else {
    Serial.println("Button Released means high Voltage");
  }

  delay(200);
}