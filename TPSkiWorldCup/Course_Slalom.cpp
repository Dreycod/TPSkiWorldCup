#include "Course_Slalom.h"
#include "Course.h"
#include "Participation.h"
#include <iostream>
#include <string>
#include <random>

using namespace std;

Course_Slalom::Course_Slalom(string nomCompetition, string dateCompetition, Participation* lesParticipants) : Course(nomCompetition, dateCompetition, lesParticipants)
{
    //this->lesParticipants = lesParticipants;
}

void Course_Slalom::attribuerDossard(int numero1, int numero2)
{

    Participation* lesParticipants = this->getLesParticipants();
    int numeroDossard = 0;

    if (numero2 <= 7) {
        for (int i = numero1; i <= numero2; i++) {
            do {
                std::random_device rd;
                std::mt19937 mt(rd());
                std::uniform_int_distribution<int> dist(1, 7);
                numeroDossard = dist(mt);
            } while (historiqueDossards[numeroDossard]);

            lesParticipants[i].setNumDossard(numeroDossard);
            historiqueDossards[numeroDossard] = true;
        }
    }
    else if (numero2 <= 15) {
        for (int i = numero1; i <= numero2; i++) {
            do {
                std::random_device rd;
                std::mt19937 mt(rd());
                std::uniform_int_distribution<int> dist(8, 15);
                numeroDossard = dist(mt);
            } while (historiqueDossards[numeroDossard]);

            lesParticipants[i].setNumDossard(numeroDossard);
            historiqueDossards[numeroDossard] = true;
        }
    }
    else if (numero2 <= 30) {
        for (int i = numero1; i <= numero2; i++) {
            do {
                std::random_device rd;
                std::mt19937 mt(rd());
                std::uniform_int_distribution<int> dist(16, 30);
                numeroDossard = dist(mt);
            } while (historiqueDossards[numeroDossard]);

            lesParticipants[i].setNumDossard(numeroDossard);
            historiqueDossards[numeroDossard] = true;
        }
    }
    else {
        for (int i = numero1; i <= numero2; i++) {
            // Trier les derniers participants par FIS et leur attribuer un dossard par ordre
            lesParticipants[i].setNumDossard(i);

        }
    }
}

// 8 suivants est random number = 8 à 15 de la WCSL
// 16 suivants = 16 à 30 de la WCSL mais cette fois dans l'ordre
// 30 à la fin = ordre des points FIS

void Course_Slalom::traitementDossards()
{
    int nombreParticipants = lesParticipants->getNombreParticipants();
    bool ordered = false; // true = liste triée par classement WCSL croissant, false = décroissant

    Course::classerLesParticipantsWCSL(ordered); // liste WCSL decroissante le plus de point servi en premier!

    attribuerDossard(1, 7);
    attribuerDossard(8, 15);
    attribuerDossard(16, 30);

    attribuerDossard(31, nombreParticipants);
    cout << "------- Par Dossard -------" << endl;
    afficherLesParticipants();
    Course::classerLesParticipantsParDossards(!ordered); // j'affiche les dossards dans l'ordre des partants
}

void Course_Slalom::afficherLesParticipants()
{
    Participation* lesParticipants = Course::getLesParticipants();
    int nombreParticipants = lesParticipants[1].getNombreParticipants();

    for (int i = 1; i < nombreParticipants; i++)
    {
        Competiteur* c = lesParticipants[i].getCompetiteur();
        cout << i << ". " << c->getNomCompetiteur() << " " << c->getPrenomCompetiteur() << " - WCSL: " << c->getClassementWCSL() << " - FIS: " << c->getClassementFIS() << " - Dossard: " << lesParticipants[i].getNumDossard() << endl; // << lesParticipants[i].getgetDossard() << endl;
    }
}


Course_Slalom::~Course_Slalom()
{

}