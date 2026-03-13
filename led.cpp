#include "deneyapkart.h"   // Deneyap Kart kütüphanesi

// Pin tanımları
const int buttonPin = D1;   // Buton pini
const int ledPin = D0;      // LED pini

// Buton durumunu tutan değişken
int buttonState = 0;

void setup() {

  // LED çıkış olarak ayarlanır
  pinMode(ledPin, OUTPUT);

  // Buton giriş olarak ayarlanır
  pinMode(buttonPin, INPUT);

}

void loop() {

  // Butonun durumunu oku
  buttonState = digitalRead(buttonPin);

  // Eğer butona basılmışsa
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);   // LED yanar
  } 
  else {
    digitalWrite(ledPin, LOW);    // LED söner
  }

}