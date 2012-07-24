/*
   REGLE ET PRET A FONCTIONNER
   Code d'exemple pour le servomoteur ecrasant les bougies 
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#include <Servo.h>
#include "fonctions.h"

unsigned long tps = 0;

// fonction de calibrage
void setup() 
{  
  initialisation();
}

// boucle principale
void loop()
{  
    // NE PAS FAIRE LES DEUX EN MEME TEMPS
    baisserMarteau();
    update();
    delay(1000);
    monterMarteau();
    update();
   delay(1000);
   fini();
}
