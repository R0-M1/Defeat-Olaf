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
    std::vector<std::vector<int>> getTerrain();
    void getDim(int &dimX, int &dimY);
};


#endif
