/* 
 * File:   EclairageBleu.cpp
 * Author: BenoitP
 * 
 * Created on 7 december 2016, 23:54
 */
 
#include "EclairageBleu.h"
#include "Arduino.h"

void EclairageBleuDef(int pin1,int pin2,int pin3,int pin4 , int pin5 , int pin6, int pin7)
{ /*  
  * On rentre ici les pin du Gyrophare 
  * A Completer...
  */
  pinMode(pin1,OUTPUT); //LatchPIN = 2
  pinMode(pin2,OUTPUT); //ClockPin = 3
  pinMode(pin3,OUTPUT); //DataPin = 4
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
  pinMode(pin6,OUTPUT);
  pinMode(pin7,OUTPUT);
}

void AnimationBleu(int num_Animation, int compt_Animation)
{
  switch(num_Animation)
  {
    case 0 : //Gyrophare Eteind
        {
          
          break;
        }
    default: //animation par defaut , on ne fait rien
        {
          break;
        }
  }
}

//Faut faire un test de ça : https://www.arduino.cc/en/Tutorial/ShftOut11

