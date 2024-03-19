#include "Donjon.h"

void Donjon::commencer(int numeroDonjon) {
    niveau[numeroNiveau].loadLevel("level.txt");
}

Donjon::Donjon() {
    numeroNiveau=0;
}

std::vector<std::vector<Case>> Donjon::getTerrain() {
    return niveau[numeroNiveau].getTerrain();
}

void Donjon::getDim(int &dimX, int &dimY) {
    niveau[numeroNiveau].getDim(dimX, dimY);
}

void Donjon::deplacerCase(int depuisPosX, int depuisPosY, int versPosX, int versPosY) {
    niveau[numeroNiveau].deplacerCase(depuisPosX, depuisPosY, versPosX, versPosY);
}

void Donjon::getPosJoueur(int& posX, int& posY) {
    niveau[numeroNiveau].getPosJoueur(posX, posY);
}

Case Donjon::getCase(int posX, int posY) {
    return niveau[numeroNiveau].getCase(posX, posY);
}

void Donjon::tuerMonstre(int posX, int posY) {
    niveau[numeroNiveau].tuerMonstre(posX, posY);
}


