#include "Jeu.h"

void Jeu::initialiser(std::string classe) {
    Joueur tempJoueur(classe);
    joueur = tempJoueur;
    donjon[numeroDonjon].commencer(numeroDonjon);

}

Jeu::Jeu(){
    numeroDonjon = 0;
}

std::vector<std::vector<int>> Jeu::getTerrain() {
    return donjon[numeroDonjon].getTerrain();
}

void Jeu::getDim(int &dimX, int &dimY) {
    donjon[numeroDonjon].getDim(dimX, dimY);
}

