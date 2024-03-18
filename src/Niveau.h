#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <iostream>

class Niveau {
private:
    std::vector<std::vector<int>> terrain; // Le grid du level
    int dimX;
    int dimY;


public:
    Niveau();
    void loadLevel(const std::string& filename); // Chargement
    std::vector<std::vector<int>> getTerrain();
    void getDim(int& dimX, int& dimY);
    bool getCaseSolide(int posX, int posY) const;
};

#endif
