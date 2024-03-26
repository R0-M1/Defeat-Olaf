#include "JeuModeTexte.h"
#include "Windows.h"

void JeuModeTexte::start() {
    std::cout<<"██████╗░███████╗███████╗███████╗░█████╗░████████╗░░░░░█████╗░██╗░░░░░░█████╗░███████╗"<<std::endl;
    std::cout<<"██╔══██╗██╔════╝██╔════╝██╔════╝██╔══██╗╚══██╔══╝░░░░██╔══██╗██║░░░░░██╔══██╗██╔════╝"<<std::endl;
    std::cout<<"██║░░██║█████╗░░█████╗░░█████╗░░███████║░░░██║░░░░░░░██║░░██║██║░░░░░███████║█████╗░░"<<std::endl;
    std::cout<<"██║░░██║██╔══╝░░██╔══╝░░██╔══╝░░██╔══██║░░░██║░░░░░░░██║░░██║██║░░░░░██╔══██║██╔══╝░░"<<std::endl;
    std::cout<<"██████╔╝███████╗██║░░░░░███████╗██║░░██║░░░██║░░░░░░░╚█████╔╝███████╗██║░░██║██║░░░░░"<<std::endl;
    std::cout<<"╚═════╝░╚══════╝╚═╝░░░░░╚══════╝╚═╝░░╚═╝░░░╚═╝░░░░░░░░╚════╝░╚══════╝╚═╝░░╚═╝╚═╝░░░░░"<<std::endl;
    std::string classe;

    do {
        std::cout<<"Choisissez une classe de personnage parmis :"<<std::endl;
        std::cout<<"    - Stickman"<<std::endl;
        std::cout<<"    - Elfe"<<std::endl;
        std::cout<<"    - Barbare"<<std::endl;
        std::cin>> classe;
    } while(classe!="Stickman"&&classe!="Elfe"&&classe!="Barbare");
    jeu.initialiser(classe);
}

void JeuModeTexte::boucleJeu() {
    SetConsoleOutputCP(CP_UTF8);
    start();
    std::string input;
    do {
        if(jeu.monstreProche()) {
            do {
                std::cout << "Ennemi en face de toi ! Veux tu l'(A)ttaquer ⚔  ou (F)uir ⚐"<<std::endl;
                std::cin >> input;
            } while (input != "A" && input != "F");
            if (input == "A") {
                if (jeu.attaque()) std::cout << "Bravo ! Vous avez tuer le monstre !" << std::endl;
                else std::cout << "Aie ! Vous avez perdu 10 points de vie" << std::endl;
            }
        }

        afficheNiveau();

        std::cout<<std::endl<<"Quel mouvement voulez vous faire ? (0 pour quitter)    ◀ Q • D ▶"<<std::endl;
        std::cin>>input;
        if(input=="q") jeu.reculerJoueur();
        if(input=="d") jeu.avancerJoueur();
    } while(input!="0");
}

JeuModeTexte::JeuModeTexte() {

}

void JeuModeTexte::afficheNiveau() {
    int dimX;
    int dimY;
    std::vector<std::vector<Case>> terrain = jeu.getTerrain();
    jeu.getDim(dimX, dimY);

    for(int i=0; i < dimY; i++) {
        for(int j=0; j<dimX; j++) {
            if(terrain[i][j]==monstre) {
                std::cout<<"🐅";
                j=j+2;
            }
            else if(terrain[i][j]==joueur) {
                std::cout<<"🧍‍♂️";
                j++;
            }
            else if(terrain[i][j]==mur) std::cout<<"█";
            else if(terrain[i][j]==vide) std::cout<<" ";

        }
        std::cout<<std::endl;
    }

    std::cout<<"Points de Vie : "<<jeu.getPV()<<"❤"<<std::endl;
}
