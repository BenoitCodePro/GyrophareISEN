/*
 * Programme Gyrophare ISEN
 * 
 * Benoit Piriou & Rudja Rulle
 * 
 * Decembre 2016 - Fevrier 2017
 */

//--Mode d'execution--//

#define TEST_MODE 0
#define CLASSIC_MODE 1


#include "EclairageBleu.h"
#include "Bluetooth.h"


int maxPatern=20; //Nombre Maximum de Paternes
int posPatern=0;




void setup() {
  
//--SetupEclairage--//

  pinMode(2, OUTPUT); //port2
  pinMode(3, OUTPUT); //port3
  pinMode(4, OUTPUT);  //port4
  pinMode(16,OUTPUT); //16
  pinMode(17,OUTPUT); //17
  pinMode(18,OUTPUT); //18
  pinMode(19,OUTPUT); //19
  
//--SetupBluetooth--//
//To fill....

}

void loop() {

//Test Mode
AnimationBleu(1,0);

//Clasic Mode
//Hacker Mode

}
