#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>
#include <string>


int main(){

    bool partiegagnee = false;
    Tictactoe * jeu = new Tictactoe();
     
    int numeroCase;



    while(!partiegagnee && !(jeu->testeJeuNul())){
        
        jeu->afficheGrille();
        std::cout << "Entrez un numero de case entre 1 et 9 : ";

        std::cin >> numeroCase;
        jeu->ajouteSymbole((numeroCase - 1) % 3, (numeroCase - 1) / 3);
        //vu que numeroCase est un entier, quand on le disive, l'ordi va utilsier un resultat entier.
        //pour avoir un resultat décimal, il aurait fallu que numeroCase soit un float de base.
        partiegagnee = jeu->testeVictoireDiagonale() || jeu->testeVictoireHorizontale() || jeu->testeVictoireVerticale();
        jeu->finTour();
    }
    if (partiegagnee == false) {
        std::cout << "Match nul" << std::endl;
        std::cout << "NULLOS UwU";
    }
    return 0;
}