#ifndef LEVEL_H
#define LEVEL_H

#include <vector>

class Level {
private:
    std::vector<std::vector<int>> layout; // Le grid du level

public:
    Level();
    void loadLevel(const std::string& filename); // Chargement
    void printLevel();
};

#endif
