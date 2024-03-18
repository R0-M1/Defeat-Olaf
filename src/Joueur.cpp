#include "Joueur.h"

Joueur::Joueur(std::string classe) : classe(classe) {
    if (classe == "Stickman") {
        defense = 10;
        pointsDeVie = 100;
        vitesse = 20;
        degatsAttaque = 30;
        chanceCritique = 10;
        bonusCritique = 50;
    } else if (classe == "Elfe") {
        defense = 15;
        pointsDeVie = 80;
        vitesse = 30;
        degatsAttaque = 25;
        chanceCritique = 20;
        bonusCritique = 70;
    } else if (classe == "Barbare") {
        defense = 20;
        pointsDeVie = 120;
        vitesse = 15;
        degatsAttaque = 35;
        chanceCritique = 5;
        bonusCritique = 40;
    }
}

int Joueur::getDefense() const {
    return defense;
}

int Joueur::getPointsDeVie() const {
    return pointsDeVie;
}

int Joueur::getVitesse() const {
    return vitesse;
}

int Joueur::getDegatsAttaque() const {
    return degatsAttaque;
}

int Joueur::getChanceCritique() const {
    return chanceCritique;
}

int Joueur::getBonusCritique() const {
    return bonusCritique;
}

void Joueur::avancer() {

}

void Joueur::reculer() {

}

void Joueur::sauter() {

}

void Joueur::accroupir() {

}

Joueur::Joueur() {
    classe="Stickman";
    defense = 10;
    pointsDeVie = 100;
    vitesse = 20;
    degatsAttaque = 30;
    chanceCritique = 10;
    bonusCritique = 50;
}
