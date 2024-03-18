#include "JeuModeTexte.h"

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
    start();
    std::string mouvement;
    do {
        afficheNiveau();
        std::cout<<"Quel mouvement voulez vous faire ? (0 pour quitter)"<<std::endl;
        std::cin>>mouvement;
        //if(mouvement=="q")
    } while(mouvement!="0");
}

JeuModeTexte::JeuModeTexte() {

}

void JeuModeTexte::afficheNiveau() {
    int dimX;
    int dimY;
    std::vector<std::vector<int>> terrain = jeu.getTerrain();
    jeu.getDim(dimX, dimY);

    for(int i=0; i < dimY; i++) {
        for(int j=0; j<dimX; j++) {
            if(terrain[i][j]==0) std::cout<<" ";
            if(terrain[i][j]==1) std::cout<<"█";
            if(terrain[i][j]==2) std::cout<<"⬜";
        }
        std::cout<<std::endl;
    }



}
