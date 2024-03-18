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
        std::vector<int> row;
        for (char c : line) {
            if (c == '.') {
                row.push_back(0); // rien
            } else if (c == 'X') {
                row.push_back(1); // Mur
            } else if (c == 'M') {
                row.push_back(2); // Monstre
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

std::vector<std::vector<int>> Niveau::getTerrain() {
    return terrain;
}

void Niveau::getDim(int &dimX, int &dimY) {
    dimX = this->dimX;
    dimY = this->dimY;
}
