#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>

#include <string>

class Joueur {
private:
    std::string classe;
    int defense;
    int pointsDeVie;
    int vitesse;
    int degatsAttaque;
    int chanceCritique;
    int bonusCritique;

public:
    Player(std::string classe);
    // Getters stats
    int getDefense() const;
    int getPointsDeVie() const;
    int getVitesse() const;
    int getDegatsAttaque() const;
    int getChanceCritique() const;
    int getBonusCritique() const;
};

#endif