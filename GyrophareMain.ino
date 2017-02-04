/*
 * Programme Gyrophare ISEN
 * 
 * Benoit PIRIOU & Rudja RULLE
 * 
 * Decembre 2016 - Fevrier 2017
 */

//--Mode d'execution--//

#define TEST_MODE 0
#define CLASSIC_MODE 1


#include "EclairageBleu.h"
#include "Bluetooth.h"

//Include for ledMatrix
#include <SPI.h>
#include "bitBangedSPI.h"
#include "MAX7219_Dot_Matrix.h"

//Initialisation de l'écran d'affichage myDisplay(nombre de max, LOAD, DIN, CLK)
MAX7219_Dot_Matrix myDisplay (4, 12, 13, 11);

int TailleTexte=20;
int avanceText = 0;

//Gestion de la machine d'état
long previousMillisText = 0;
long previousMillisGyro = 0;

long intervalText = 100;
long intervalGyro = 700;

void setup() {
        //--SetupTextToShow--//
        myDisplay.begin ();
        myDisplay.sendSmooth ("Hello ISEN",0);
          
        //--SetupEclairage--//
        pinMode(2, OUTPUT); //latchPin
        pinMode(3, OUTPUT); //ClockPin
        pinMode(4, OUTPUT); //DataPin
        pinMode(16,OUTPUT); //16
        pinMode(17,OUTPUT); //1
        pinMode(18,OUTPUT); //18
        pinMode(19,OUTPUT); //19
}

void loop() {
    do {
                //Initialisation 
          unsigned long currentMillis = millis();
          
          if (currentMillis - previousMillisGyro > intervalGyro) {
            previousMillisGyro = currentMillis;
            //APPEL DU PROGRAMME GYRO
            AnimationBleu(1,0);
          }else if (currentMillis - previousMillisText > intervalText) {
            previousMillisText = currentMillis;
            if (avanceText<TailleTexte){
              myDisplay.sendSmooth ("Hello",avanceText);
              avanceText++;
            }else {
              avanceText=0;
            }
          }else {
            //Ne rien faire
          }
          //SIRENE SUR INTERRUPTION
          //Lorsque l'utilisateur demande d'allumer la sirene, on met une pin à 1 pour alimenter la sirene.
          
          //BLUETOOTH SUR INTERRUPTION 
          //Lorsque qu'un message est reçu sur le canal d'écoute du bluetooth, on va récupérer les infos et
          //mettre à jour les variables telles:
          //- Message à afficher
          //- Allumer gyro etc...
     }while (1);
}
