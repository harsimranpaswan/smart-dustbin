#include <Servo.h>

Servo servoMain;

int trigpin = 10;
int echopin = 11;

int distance;
float duration;
float cm;

void setup(){
servoMain.attach(9);
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
}

void loop(){
digitalWrite(trigpin, LOW);
delay(2);
digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);
duration = pulseIn(echopin, HIGH);
cm=(duration/58.82);
if(cm<20){
servoMain.write(90); 
delay(2000);
}
else{
servoMain.write(0);
delay(10);
}
}
