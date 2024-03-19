#ifndef DONJON_H
#define DONJON_H

#include "Niveau.h"

class Donjon {
private:
    Niveau niveau[3];
    int numeroNiveau;

public:
    Donjon();
    void commencer(int numeroDonjon);
    std::vector<std::vector<Case>> getTerrain();
    void getDim(int &dimX, int &dimY);
    Case getCase(int posX, int posY);
    void deplacerCase(int depuisPosX, int depuisPosY, int versPosX, int versPosY);
    void getPosJoueur(int& posX, int& posY);
    void tuerMonstre(int posX, int posY);
};


#endif
