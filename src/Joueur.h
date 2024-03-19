#ifndef JOUEUR_H
#define JOUEUR_H

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
    Joueur();
    Joueur(std::string classe);
    // Getters stats
    int getDefense() const;
    int getPV() const;
    int getVitesse() const;
    int getDegatsAttaque() const;
    int getChanceCritique() const;
    int getBonusCritique() const;

    void setPV(int pv);

    void avancer();

    void reculer();

    void sauter();

    void accroupir();
};

#endif