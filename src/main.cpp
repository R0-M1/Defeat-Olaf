#include "JeuModeTexte.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

int main() {
    std::string titre = "Defeat Olaf";
    sf::RenderWindow window(sf::VideoMode(800, 800), titre, sf::Style::Default);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }

        }
        window.clear(sf::Color::Blue);

        window.display();
    }
    return 0;
}