#include <Arduino.h>

const int motionPin = 2; // Pin connected to the motion sensor
const int buzzerPin = 0; // Pin connected to the buzzer
const int ledPin = 1; // Pin connected to the LED

void setup() {
  pinMode(motionPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
  Serial.println("Hello, Raspberry Pi Pico W!");
}

void loop() {
  int motionValue = digitalRead(motionPin);
  if (motionValue == HIGH) {
    // Motion detected!
    digitalWrite(buzzerPin, HIGH); // Turn on the buzzer
    digitalWrite(ledPin, HIGH); // Turn on the LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(buzzerPin, LOW); // Turn off the buzzer
    digitalWrite(ledPin, LOW); // Turn off the LED
  }
  delay(100); // Adjust the delay as needed
}
