#ifndef MONSTRE_H
#define MONSTRE_H

#include <string>

class Monstre {
protected:
    std::string type;
    int defense;
    int pointsDeVie;
    int vitesse;
    int degatsAttaque;
    int chanceCritique;
    int bonusCritique;

public:
    Monstre(std::string type, int defense, int pointsDeVie, int vitesse, int degatsAttaque, int chanceCritique, int bonusCritique);
    std::string getType();
    int getDefense();
    int getPointsDeVie();
    // faudra ajouter les autres getters
};

class Slime : public Monstre {
public:
    Slime();
};

class Squelette : public Monstre {
public:
    Squelette();
};

class Loup : public Monstre {
public:
    Loup();
};

#endif
