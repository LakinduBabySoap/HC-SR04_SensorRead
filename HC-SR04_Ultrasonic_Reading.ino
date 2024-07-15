#include <Wire.h>
#include <SPI.h>
#define echoPin 13                          // CHANGE PIN NUMBER HERE IF YOU WANT TO USE A DIFFERENT PIN
#define trigPin 2                           // CHANGE PIN NUMBER HERE IF YOU WANT TO USE A DIFFERENT PIN
long duration, distance;
void setup(){
  Serial.print("Setup is starting");
  Serial.begin (115200);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.print("Setup is complete");
}
void loop(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  Serial.print("Loop1 is complete");
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  Serial.print("Loop2 is complete");
  distance = duration / 58.2;
  String disp = String(distance);

  Serial.print("distance :");
  Serial.print(disp);
  Serial.print(" cm");
  Serial.println("");
  delay(1000);
}