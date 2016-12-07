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

  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
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

