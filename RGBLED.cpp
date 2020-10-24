#include "RGBLED.h"

RGBLED::RGBLED(bool sure){
  msg=sure;
}
void RGBLED::begin(int boad,int r,int g,int b){
  R=r;
  G=g;
  B=b;
  if(msg==1){
  Serial.println("RGBLED library started");
  }
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  digitalWrite(R,1);
  digitalWrite(G,1);
  digitalWrite(B,1);
}
void RGBLED::setcolor(String color){
  if(color=="red"){
    digitalWrite(R,0);
  }
  if(color=="green"){
    digitalWrite(G,0);
  }
  if(color=="blue"){
    digitalWrite(B,0);
  }
}
void RGBLED::rgbcolor(int r,int g,int b){
  analogWrite(R,r);
  analogWrite(G,g);
  analogWrite(B,b);
  
}
