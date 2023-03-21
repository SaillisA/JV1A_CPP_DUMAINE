//Alors, je sais pas si cela fonctionnera de votre cote, mais Microsoft visual studio me met cette erreur :
//Impossible de démarrer le programme 'C\Users...\CppDevoir.exe'. Le fichier spécifié est introuvable.
// donc voila voila



#include <iostream>
#include <string>
#include "Lieu.cpp"

int main()
{

    /*
    //exo 1
    int desti;
    std::cout << "Voulez vous aller a Paris 1 ou Tokyo 2 ?";
    std::cin >> desti;

    if (desti == 1) {
        std::cout << "Vous etes arrive a Paris !";
    }
    if (desti == 2) {
        std::cout << "Vous etes arrive a Tokyo !";
    }
    
    //exo 2
    std::string desti="";
    std::cout << "Voulez vous aller a Paris ou Angers ?";
    std::cin >> desti;

    if (desti == "Paris") {
        std::cout << "Vous etes arrive a Paris !";
    }
    if (desti == "Angers") {
        std::cout << "Vous etes arrive a Angers !";
    }*/

    
    //exo 3 + un chouia du 6

    //on definit les objets
    Lieu lieu1("Angers", "La meilleure ville au monde, ", 5), lieu2("Paris", "Trop de gens", 19), lieu3("Rennes", "Trop relou les bretons, vive le beurre doux !", 10);
    //variable qui sera egale a true si la ville est d'une difficulte superieure a 15
    bool camp;

    //variable string pour stocker la ville dans laquelle le joueur souhaite aller
    std::string desti = "";
    std::cout << "Voulez vous aller a  Angers, Paris ou Rennes ?";
    std::cin >> desti;

    //on se deplace dans la ville choisie
    if (desti == "Angers") {
        camp=lieu1.deplacement();
    }
    if (desti == "Paris") {
        camp=lieu2.deplacement();
    }
    if (desti == "Paris") {
        camp=lieu3.deplacement();
    }
    
    //si camp est egale a true, alors on demande au joueur si il veut installer un campement (ou pas)
    if (camp == true) {
        std::string choixcamp = "";
        std::cout << "Vous avez la possibilite d'installer un campement pour vous reposer. Voulez vous en construire un à" + desti;
        std::cin >> choixcamp;

        if (choixcamp == "oui") {
            if (desti == "Angers") { lieu1.creerCampement(); };
            if (desti == "Paris") { lieu2.creerCampement(); };
            if (desti == "Rennes") { lieu3.creerCampement(); };
        }
        if (choixcamp == "non") {
            std::cout << "Vous ne faites pas de campement";
        }
    } 
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

