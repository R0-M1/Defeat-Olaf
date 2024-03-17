#include "Level.h"
#include <iostream>
#include <fstream>

Level::Level() {}

void Level::loadLevel(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Erreur lors de l'ouverture du fichier de niveau." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::vector<int> row;
        for (char c : line) {
            if (c == ' ') {
                row.push_back(0); // rien
            } else if (c == 'X') {
                row.push_back(1); // Mur
            } else if (c == 'M') {
                row.push_back(2); // Monstre
            }
            // faire autres conditions
        }
        layout.push_back(row);
    }
    file.close();
}

void Level::printLevel() {
    for (const auto& row : layout) {
        for (int tile : row) {
            std::cout << tile << " ";
        }
        std::cout << std::endl;
    }
}
