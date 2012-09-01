/* 
   Fonctions controlant le servomoteur ecrasant les bougies 
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#include <arduino.h> // pour la fonction micros()
#include "Servo.h" // lib des servomoteurs

#include "fonctions.h"

static Servo servo;
static int pos = 0;
static unsigned long tpsPrec = 0;

void monterMarteau() // fonction remettan le marteau a sa position d'origine.
{
    pos = POS_INIT;
}

void baisserMarteau() // fonction tapant la bougie
{
   pos = POS_FIN;
}

void initialisation() // a ajouter a l'initialisation du robot
{
    // ajout des pins au programme
    servo.attach(SERVOMOTOR_LEFT);
}

void update() // a ajouter a la fonction d'update
{
    tpsPrec = micros();
    servo.write(pos);
}

bool fini()
{
    if (micros() - tpsPrec < DELAI)
    {
        return false;
    }
    
    else
    {  
        return true;
    }
}
