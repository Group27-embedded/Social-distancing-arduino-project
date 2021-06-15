

//------------------------------------------------------------------------------------------------ 
//OneMeterRuleSystem.h
//Created  by   Group 27   
//
//----------------------------------------------------------------------------------------------------------

//Constructor
//System(int  r,int  b ,int g,int echo, int trig,int buzz)
//variables r  ,b , g are arduino pins connected to red , blue and green of rgb led lights
//variables echo , trig are  arduino pins connected to sensor and echo
//varible buzz are arduino pins connected to piezo buzzzer

//Methods
//int getBlue() returns the value of arduino pin connected to blue
//int getRed()  returns the value of arduino pin connected to red
// int getGreeen() returns the value of arduino pin connected to green
// int getEchopin() returns the value of arduino pin connected to echo of sensor
//int getTrigpin() returns the value of arduino pin connected to trig pin of sensor
//int getBuzzpin()returns the value of arduino pin connected to piezo buzzer.
//void  closee()   turns the  blue light of rgb on and turns on buzz at a frequency of 50Hz
//void tooClose() turns the     red light of rgb on and  turns on the buzz at a frequency of 700Hz
//void  safe() turns the only the green light of rgb on

//Data memebers
//variables red  ,blue , green are arduino pins connected to red , blue and green of rgb led lights
//variables echoPin , trigPin are  arduino pins connected to sensor and echo
//varible buzzPin are arduino pins connected to piezo buzzzer
#ifndef CovidRuleSystem.h
#define CovidRuleSystem.h
#include "arduino.h"
class System{


  public:
     System( int, int, int , int ,int, int );
     
     void closee();
    void tooClose();
    void safe();
     int getRed();
     int getBlue();
     int getGreen();
     int getEchopin();
     int getTrigpin();
     int getBuzzpin();

    private:
    int red;
 int blue;
 int green;
 int echoPin  ;
int trigPin ;
int buzzPin  ;
       
  };

#endif
