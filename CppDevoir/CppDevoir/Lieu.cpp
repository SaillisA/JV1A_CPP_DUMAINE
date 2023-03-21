#ifndef LIEU_CPP
#define LIEU_CPP

#include "Lieu.h"
#include <iostream>

Lieu::Lieu(std::string name, std::string descript, int diff) : _nom(name), _description(descript), _difficulte(diff), _lieuAccessible()
{
}

bool Lieu::deplacement() {
	std::cout << _description;
	if (_difficulte < 15) {
		return true;
	}
	else {
		return false;
	};
}

void creerCampement() {

}
#endif