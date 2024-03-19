#include "Jeu.h"

void Jeu::initialiser(std::string classe) {
    Joueur tempJoueur(classe);
    joueur = tempJoueur;
    donjon[numeroDonjon].commencer(numeroDonjon);

}

Jeu::Jeu(){
    numeroDonjon = 0;
}

std::vector<std::vector<Case>> Jeu::getTerrain() {
    return donjon[numeroDonjon].getTerrain();
}

void Jeu::getDim(int &dimX, int &dimY) {
    donjon[numeroDonjon].getDim(dimX, dimY);
}

void Jeu::avancerJoueur() {
    int posX,posY;
    donjon[numeroDonjon].getPosJoueur(posX, posY);
    donjon[numeroDonjon].deplacerCase(posX, posY, posX, posY+1);
}

void Jeu::reculerJoueur() {
    int posX,posY;
    donjon[numeroDonjon].getPosJoueur(posX, posY);
    donjon[numeroDonjon].deplacerCase(posX, posY, posX, posY-1);
}

bool Jeu::attaque() {
    if(rand()%10<6) { //pourcentage de chance de gagner le combat
        int posX, posY;
        donjon[numeroDonjon].getPosJoueur(posX, posY);
        if(donjon[numeroDonjon].getCase(posX, posY - 1) == monstre) donjon[numeroDonjon].tuerMonstre(posX, posY - 1);
        if(donjon[numeroDonjon].getCase(posX, posY + 1) == monstre) donjon[numeroDonjon].tuerMonstre(posX, posY + 1);
        if(donjon[numeroDonjon].getCase(posX - 1, posY) == monstre) donjon[numeroDonjon].tuerMonstre(posX - 1, posY);
        if(donjon[numeroDonjon].getCase(posX + 1, posY) == monstre) donjon[numeroDonjon].tuerMonstre(posX + 1, posY);

        return true;
    }
    joueur.setPV(joueur.getPV()-10);
    return false;
}

bool Jeu::monstreProche() {
    int posX, posY;
    donjon[numeroDonjon].getPosJoueur(posX, posY);
    if(     donjon[numeroDonjon].getCase(posX, posY - 1) == monstre||
            donjon[numeroDonjon].getCase(posX, posY + 1) == monstre||
            donjon[numeroDonjon].getCase(posX - 1, posY) == monstre||
            donjon[numeroDonjon].getCase(posX + 1, posY) == monstre) {
        return true;
    }
    return false;
}

int Jeu::getPV() {
    return joueur.getPV();
}


