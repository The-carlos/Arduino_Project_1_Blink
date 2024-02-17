/*
Carlos Enrique Sánchez Martínez.
@TheCarlos____
February 2024

Blinking LED.
*/

#include <Arduino.h>

// put function declarations here:
int ledPin = 15;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

// put function definitions here:
