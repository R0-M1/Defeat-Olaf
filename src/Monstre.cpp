#include "Monstre.h"

Monstre::Monstre(std::string type, int defense, int pointsDeVie, int vitesse, int degatsAttaque, int chanceCritique, int bonusCritique) {
    this->type = type;
    this->defense = defense;
    this->pointsDeVie = pointsDeVie;
    this->vitesse = vitesse;
    this->degatsAttaque = degatsAttaque;
    this->chanceCritique = chanceCritique;
    this->bonusCritique = bonusCritique;
}

std::string Monstre::getType() {
    return type;
}

int Monstre::getDefense() {
    return defense;
}

int Monstre::getPointsDeVie() {
    return pointsDeVie;
}
// faudra ajouter les autres getters

Slime::Slime() : Monstre("Slime", 10, 20, 5, 8, 5, 10) {}

Squelette::Squelette() : Monstre("Squelette", 20, 40, 8, 12, 10, 15) {}

Loup::Loup() : Monstre("Loup", 30, 60, 10, 16, 15, 20) {}
