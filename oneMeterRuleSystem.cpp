
//--------------------------------------------------
//created by   Group 27
//
//-------------------------------------------------




#include "oneMeterRuleSystem.h"

//System class  constructor
System::System(int r,int b , int g , int echo , int trig , int buzz){

  red =r ;//initialize   private variable red
  blue = b; //initialize   private variable blue
  green =  g;//initialize   private variable green
  echoPin = echo ;//initialize   private variable echoPin
  trigPin =  trig;//initialize   private variable trigPin
  buzzPin=  buzz;//initialize   private variable buzzPin
pinMode(red  , OUTPUT);
 pinMode(blue  , OUTPUT);
  pinMode(green  , OUTPUT);
   pinMode(echoPin , INPUT);
  pinMode(trigPin , OUTPUT);
  pinMode(buzzPin , OUTPUT);
  
}
//method definition
int System::getBlue(){
  
  
  return blue; //return  value of arduino pin connected to blue}
}
int System::getRed(){
  
  
  return red; }//return value of arduino pin connected to red}
  
int System::getGreen(){
  
  
  return green; }//return value of arduino pin connected to blue
  
int System::getEchopin(){
  
  
  return echoPin; // return value of arduino pin connected to echo}
}
int System::getTrigpin(){
  
  
  return trigPin;} //return value of arduino pin connected to trig}
int System::getBuzzpin(){  
  return buzzPin; //return value of arduino pin connected to buzzer}
}

 

    void System::tooClose(){
      
        tone(buzzPin , 50); // set buzzer frequecy to 50Hz
digitalWrite(buzzPin, HIGH); //turn buzzer  on
delay(500); //wait for  half second
digitalWrite(buzzPin, LOW); // turn  buzzer  off
delay(500); //wait for half   second
digitalWrite(red, HIGH); //turn  red light on
delay(500);//wait for half a second
digitalWrite(blue ,LOW); //turn   bluelight off
digitalWrite(red ,LOW); //turn red light off
delay(500); //wait for half a second
digitalWrite(green ,LOW);//turn  green light off
}

void System::closee(){
    digitalWrite(green, LOW); //turn green light off
    digitalWrite(red, LOW); //turn red light off
    digitalWrite(blue ,HIGH ); //turn blue light on
    tone(buzzPin, 700); //set buzzer  frequecy to 700Hz
    digitalWrite(buzzPin, HIGH);//turn buzzer  on
  
  
  }

  void System::safe(){
  noTone(buzzPin); //  set buzerr  frequency to null
    digitalWrite( buzzPin, LOW); //turn  buzzer off
      digitalWrite(red, LOW);//turn  red light off
        digitalWrite(green,HIGH);//turn green light off
           digitalWrite(blue,LOW );//turn  blue light off

  }
