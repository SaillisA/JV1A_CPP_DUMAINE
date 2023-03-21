#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>


    Tictactoe::Tictactoe() : _symboleCourant('X'), _numeroTour(0) {
        _grilleDeJeu = Grille();

    }

    void Tictactoe::afficheGrille(){
        _grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        // à compléter
        if (_grilleDeJeu.getContent(x,y) == ' ') {
            _grilleDeJeu.setContent(x, y, _symboleCourant);           
            _symboleCourant == 'X' ? _symboleCourant = 'O' : _symboleCourant = 'X'; //operateur ternaire ?
            //ligne du dessus revient aux 2 d'en dessous
            //if (_symboleCourant == 'X') { _symboleCourant = 'O'; }
            //else { _symboleCourant = 'X'; }
        }
        
        else {//la case est deja occupe (ou sort du tableau)
            std::cout << "Tu t'es rate nullos. Rentre de nouvelles coordonnees";
            int numeroCase;
            std::cin >> numeroCase;
            this->ajouteSymbole(((numeroCase)-1) % 3, (numeroCase - 1) / 3);
        }

    }

    bool Tictactoe::testeVictoireVerticale(){
        if (_grilleDeJeu.getContent(0, 0) == _grilleDeJeu.getContent(1, 0) && _grilleDeJeu.getContent(0, 0) == _grilleDeJeu.getContent(2, 0) && _grilleDeJeu.getContent(0, 0) != ' ') {
            std::cout << "bravo";
            return true;
        }
        if (_grilleDeJeu.getContent(0, 1) == _grilleDeJeu.getContent(1, 1) && _grilleDeJeu.getContent(0, 1) == _grilleDeJeu.getContent(2, 1) && _grilleDeJeu.getContent(0, 1) != ' ') {
            std::cout << "bravo";
            return true;
        }
        if (_grilleDeJeu.getContent(0, 2) == _grilleDeJeu.getContent(1, 2) && _grilleDeJeu.getContent(0, 2) == _grilleDeJeu.getContent(2, 2) && _grilleDeJeu.getContent(0, 2) != ' ') {
            std::cout << "bravo";
            return true;
        }
        return false;
    }

    bool Tictactoe::testeVictoireHorizontale(){
        if (_grilleDeJeu.getContent(0, 0) == _grilleDeJeu.getContent(0, 1) && _grilleDeJeu.getContent(0, 0) == _grilleDeJeu.getContent(0, 2) && _grilleDeJeu.getContent(0, 0) != ' ') {
            std::cout << "bravo";
            return true;
        }
        if (_grilleDeJeu.getContent(1, 0) == _grilleDeJeu.getContent(1, 1) && _grilleDeJeu.getContent(1, 0) == _grilleDeJeu.getContent(1, 2) && _grilleDeJeu.getContent(1, 0) != ' ') {
            std::cout << "bravo";
            return true;
        }
        if (_grilleDeJeu.getContent(2, 0) == _grilleDeJeu.getContent(2, 1) && _grilleDeJeu.getContent(2, 0) == _grilleDeJeu.getContent(2, 2) && _grilleDeJeu.getContent(2, 0) != ' ') {
            std::cout << "bravo";
            return true;
        }
        return false;
    }

    bool Tictactoe::testeVictoireDiagonale(){
        if (_grilleDeJeu.getContent(0, 0) == _grilleDeJeu.getContent(1, 1) && _grilleDeJeu.getContent(0, 0) == _grilleDeJeu.getContent(2, 2) && _grilleDeJeu.getContent(0, 0) != ' ') {
            std::cout << "bravo";
            return true;
        }
        if (_grilleDeJeu.getContent(2, 0) == _grilleDeJeu.getContent(1, 1) && _grilleDeJeu.getContent(2, 0) == _grilleDeJeu.getContent(0, 2) && _grilleDeJeu.getContent(2, 0) != ' ') {
            std::cout << "bravo";
            return true;
        }
        return false;
    }

    bool Tictactoe::testeJeuNul(){
        if (_numeroTour == 9) {
            return true;
        }
        return false;
    }

    void Tictactoe::finTour(){
        _numeroTour++;
    }

#endif