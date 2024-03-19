#include "Niveau.h"
#include <fstream>
#include <cstring>

Niveau::Niveau() {}

void Niveau::loadLevel(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier de niveau." << std::endl;
        return;
    }



    std::string line;
    int i=0;
    while (std::getline(file, line)) {
        std::vector<Case> row;
        for (char c : line) {
            if (c == '.') {
                row.push_back(vide); // rien
            } else if (c == 'X') {
                row.push_back(mur); // Mur
            } else if (c == 'M') {
                row.push_back(monstre); // Monstre
            } else if (c == 'J') {
                row.push_back(joueur); // Monstre
            }
            // faire autres conditions
        }
        terrain.push_back(row);
        i++;
    }
    dimX = line.length();
    dimY = i;

    file.close();
}



bool Niveau::getCaseSolide(int posX, int posY) const {
    return terrain[posX][posY]==1;
}

std::vector<std::vector<Case>> Niveau::getTerrain() {
    return terrain;
}

void Niveau::getDim(int &dimX, int &dimY) {
    dimX = this->dimX;
    dimY = this->dimY;
}

void Niveau::deplacerCase(int depuisPosX, int depuisPosY, int versPosX, int versPosY) {
    Case temp;
    temp = terrain[depuisPosX][depuisPosY];
    terrain[depuisPosX][depuisPosY] = terrain[versPosX][versPosY];
    terrain[versPosX][versPosY] = temp;
}

void Niveau::getPosJoueur(int& posX, int& posY) {
    for(int i=0; i < terrain.size() ; i++) {
        for (int j = 0; j < terrain[i].size(); j++) {
            if(terrain[i][j]==joueur) {
                posX=i;
                posY=j;
            }
        }
    }
}

Case Niveau::getCase(int posX, int posY) {
    return terrain[posX][posY];
}

void Niveau::tuerMonstre(int posX, int posY) {
    if(terrain[posX][posY]==monstre) terrain[posX][posY]=vide;
}
