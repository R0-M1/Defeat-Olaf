#include "Donjon.h"

void Donjon::commencer(int numeroDonjon) {
    niveau[numeroNiveau].loadLevel("C:\\Users\\Romain\\CLionProjects\\Defeat-Olaf\\src\\level.txt");
}

Donjon::Donjon() {
    numeroNiveau=0;
}

std::vector<std::vector<int>> Donjon::getTerrain() {
    return niveau[numeroNiveau].getTerrain();
}

void Donjon::getDim(int &dimX, int &dimY) {
    niveau[numeroNiveau].getDim(dimX, dimY);
}


