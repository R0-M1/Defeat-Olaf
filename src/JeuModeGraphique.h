#ifndef JEUMODEGRAPHIQUE_H
#define JEUMODEGRAPHIQUE_H

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"


class JeuModeGraphique {
private:

public:
    JeuModeGraphique();
    void boucleJeu(sf::RenderWindow& window);
};


#endif
