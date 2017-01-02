/* 
 * File:   EclairageBleu.cpp
 * Author: BenoitP
 * 
 * Created on 7 december 2016, 23:54
 */
 
#include "EclairageBleu.h"
#include "Arduino.h"

void AnimationBleu(int num_Animation, int compt_Animation)
{ 
  //Les autres PIN.
  switch(num_Animation)
  {
    case 0 : //Gyrophare Eteind
        {          
          break;
        }
    case 1 : //annimation de 1 a 8
        {
          GyroDisplay(200);
          break;
        }        
                  
    default : //animation par defaut , on ne fait rien
        {
          break;
        }
  }
}

void GyroDisplay(int numberToDisplay)
{
  int latchPin=2;
  int clockPin=3;
  int dataPin=4;
  // 16 17 18 19

  /* -
   * 1 
   * 2 
   * -
   * 4
   * 8
   * -
   * 16
   * 32
   * -
   * 64
   * 128
   * -
   * 256
   * 1024
   * -
   * 2048
   * 4096
   * -
   */

   //Traitement de numberToDisplay
    
    // take the latchPin low so 
    // the LEDs don't change while you're sending in bits:
    digitalWrite(latchPin, LOW);
    // shift out the bits:
    shiftOut(dataPin, clockPin, MSBFIRST, numberToDisplay);  

    //take the latch pin high so the LEDs will light up:
    digitalWrite(latchPin, HIGH);
    // pause before next value:
    delay(500);
}

