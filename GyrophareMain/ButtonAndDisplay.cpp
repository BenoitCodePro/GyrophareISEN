/* 
 * File:   ButtonAndDisplay.cpp
 * Author: BenoitP
 *
 * Created on 3 January 2017
 * 
 */

 #include "Arduino.h"

 #define BUTTON_ONE 1
 #define BUTTON_TWO 2

boolean IsPushed(int wichButton) //On gére l'anti-rebond ici d'où le code un peu complexe.
{
  switch(wichButton)
    {
      case 1: //Bouton 1
        { 
          if(digitalRead(BUTTON_ONE)) {delay(200); return(digitalRead(wichButton));}
          return(LOW);
        }
      case 2:
        {
          if(digitalRead(BUTTON_TWO)) {delay(200); return(digitalRead(wichButton));}
          return(LOW);          
        }
    }
  return(LOW);
}



