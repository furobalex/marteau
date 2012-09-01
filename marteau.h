/* 
   Prototypes des fonctions codant pour l'ecrasement des bougies
   Auteurs : Jeremy et Aurélien
   Derniere modif : 22/07/2012
*/

#ifndef MARTEAU

#define MARTEAU
  
#define SERVOMOTOR_LEFT 9 // PIN 9 ET 10 INVERSES (ETRE VIGILANT)
  
#define POS_INIT 0
#define POS_FIN  120
#define DELAI 1000
  
  void monterMarteau();
  void baisserMarteau();
  void initialisation();
  void update();
  bool fini();
  
#endif
  
  
