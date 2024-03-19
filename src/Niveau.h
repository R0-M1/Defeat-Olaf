#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <iostream>

enum Case {vide, mur, joueur, monstre};

class Niveau {
private:
    std::vector<std::vector<Case>> terrain; // Le grid du level
    int dimX;
    int dimY;


public:
    Niveau();
    void loadLevel(const std::string& filename); // Chargement
    std::vector<std::vector<Case>> getTerrain();
    void getDim(int& dimX, int& dimY);
    bool getCaseSolide(int posX, int posY) const;
    void deplacerCase(int depuisPosX, int depuisPosY, int versPosX, int versPosY);
    void getPosJoueur(int& posX, int& posY);
    Case getCase(int posX, int posY);
    void tuerMonstre(int posX, int posY);
};

#endif
