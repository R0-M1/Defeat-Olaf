#ifndef JEUMODETEXTE_H
#define JEUMODETEXTE_H

#include "Jeu.h"

class JeuModeTexte {
private:
    Jeu jeu;
    void start();
    void afficheNiveau();


public:
    JeuModeTexte();
    void boucleJeu();
};


#endif
