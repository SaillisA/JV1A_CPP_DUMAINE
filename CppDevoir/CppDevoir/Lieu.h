#ifndef LIEU_H
#define LIEU_H

#include <string>
#include <vector>
#include <string>

class Lieu {

private:
    std::string _nom;
    std::string _description;
    int _difficulte{};
    char _lieuAccessible[3];


public:
    Lieu(std::string name, std::string _descript, int diff); //constructeur
    bool deplacement();
    void creerCampement()
};

#endif