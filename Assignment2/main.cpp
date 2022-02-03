#include <Arduino.h>
#define X 2
#define Y 3
int x,y,lhs,rhs;

void setup() {
  pinMode(X,INPUT);
  pinMode(Y,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  x=digitalRead(X);
  y=digitalRead(Y);
  lhs= x ||(!y);
  rhs= (x&&y) || (x&&(!y)) || ((!x)&&(!y));
  if(lhs==rhs)
	  digitalWrite(LED_BUILTIN,HIGH);
  else
	  digitalWrite(LED_BUILTIN,LOW);
  // put your main code here, to run repeatedly:
}
