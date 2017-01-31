#include <SoftwareSerial.h>


SoftwareSerial mavoieserie(0, 1); // pin TX RX du module Bluetooth 

char c;
String string;
String etape;
boolean stringComplete = false;
boolean etapeComplete = false;


void setup() {

mavoieserie.begin(9600);
mavoieserie.println("AT+NAMEGyrophare Isen"); // nom du module bluetooth 
mavoieserie.println(" Choisir votre état : 1, 2 ,3 ou 4 suivi de /");

}

void loop() {
  
    if (mavoieserie.available())  //choix de l'étape 1, 2, 3 ou 4
    {
        // récupérer le prochain octet (byte ou char)
        c = mavoieserie.read(); 
        // concaténation des octets reçus
        etape += c;
        
        if(c== '/') {
          etapeComplete = true;
          mavoieserie.print("etape: ");
          mavoieserie.println(etape);
        }
   
          while (etapeComplete){
                              
          if (etape == "1/")
          {  
            // chose à faire                  
          }

          else if (etape == "2/") // sauvegarde d'une chaine de caractère dans une variable 
          {
          
            if (mavoieserie.available()) {              
                c = mavoieserie.read();                
                string += c;  // concaténation des octets reçus                              
                if(c== '/') {
                  stringComplete = true;
  
                  if (stringComplete) // chose à faire quand la chaine de caractère est complète 
                  {

                  // écrire l'action à faire ici 
                  
                    string = "";
                    stringComplete = false;
                    etape = "";
                    etapeComplete = false;
                    mavoieserie.println(" Choisir votre état : 1, 2 ,3 ou 4 suivi de /"); //retour au choix de l'étape 
                  } 
                              } 
                                        }
           } 
          
          else if (etape == "3/")
          {
            // chose à faire 
          }
          
          else if (etape == "4/")
          {
            // chose à faire 
          }
          


          
                }
             }
          }
