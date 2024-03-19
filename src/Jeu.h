#ifndef JEU_H
#define JEU_H

#include "Joueur.h"
#include "Donjon.h"

class Jeu {
private:
    Donjon donjon[3];
    Joueur joueur;
    int numeroDonjon;

public:
    Jeu();
    void initialiser(std::string classe);
    std::vector<std::vector<Case>> getTerrain();
    void getDim(int &dimX, int &dimY);
    void avancerJoueur();
    void reculerJoueur();
    bool attaque();
    bool monstreProche();
    int getPV();
};


#endif