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

int Player::getDefense() const {
    return defense;
}

int Player::getPointsDeVie() const {
    return pointsDeVie;
}

int Player::getVitesse() const {
    return vitesse;
}

int Player::getDegatsAttaque() const {
    return degatsAttaque;
}

int Player::getChanceCritique() const {
    return chanceCritique;
}

int Player::getBonusCritique() const {
    return bonusCritique;
}

void Player::avancer() {

}

void Player::reculer() {

}

void Player::sauter() {

}

void Player::accroupir() {

}
