#include <NewPing.h> //NewPing library included
#include "OneMeterRuleSystem.h" //OneMeterRuleSystem.h  header library included 



System system1(11 , 13, 12, 7, 6, 10); // Object of System class  created
NewPing ping1(6,7, 200); //object of NewPing created

 void setup() {
  // put your setup code here, to run once


  Serial.begin(9600);//serial monitor initialized
}

void loop() {
    long cm;// variable to hold distance reading is declared

  // put your main code here, to run repeatedly:

 
  cm =  ping1.ping_cm(); //  distance measured in cm is  read and saved in cm variable

  Serial.println( cm);//print out distance in cm

//if distance is between 0 and 50
 if( cm <= 50 && cm > 0 ){

      system1.tooClose() ;//call method tooClose
  
 
  }
             //if distance is between 51 and 100
  else if(cm  <=100  &&   cm>50){
      system1.closee(); // call  method closee
  }
  
  else{
    delay(50);//wait for 50 microseconds 
system1.safe();// call method safe
  
  }
}
