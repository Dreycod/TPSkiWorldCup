#include "Course_Slalom.h"
#include "Course.h"
#include "Participation.h"
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;

Course_Slalom::Course_Slalom(string nomCompetition, string dateCompetition, Participation* lesParticipants) : Course(nomCompetition, dateCompetition, lesParticipants)
{
    
}


void Course_Slalom::attribuerDossard(int numero1, int numero2)
{
    int start = numero1 -= 1;
	int end = numero2 -= 1; // pour commencer à 0

   

    if (numero2 <= 15) {
        

		int range = end - start + 1;
        int* numbers = new int[range];

        for (int i = 0; i < range; ++i) {
            numbers[i] = i + start + 1;
			
		} // Remplissage de la table numbers

        for (int i = range - 1; i > 0; --i) {
            int j = std::rand() % (i + 1);
            std::swap(numbers[i], numbers[j]);

		} // Mélange de la table numbers

        int number_place = 0;

        for (int Participant = start; Participant <= end; Participant++) {
            lesParticipants[Participant].setNumDossard(numbers[number_place]);
            number_place++;
		} // Attribution des dossards aux participants
        delete[] numbers;
    }
    else {
        for (int i = numero1; i <= 100; i++) {
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
	int MaxParticipants = Course::getNombreParticipants();
	if (MaxParticipants > 100) {
		cout << "Trop de participants" << endl;
		MaxParticipants = 100;  
		return;
	}
    bool ordered = false; // true = liste triée par classement WCSL croissant, false = décroissant

    Course::classerLesParticipantsWCSL(ordered); // liste WCSL decroissante le plus de point servi en premier!
    attribuerDossard(1, 7);
    attribuerDossard(8, 15);
    attribuerDossard(16, 30);
    Course::classerLesParticipantsFIS(ordered);
    attribuerDossard(31, MaxParticipants);
    Course::classerLesParticipantsParDossards(!ordered); // j'affiche les dossards dans l'ordre des partants
    afficherLesParticipants();
}

void Course_Slalom::afficherLesParticipants()
{
    int nombreParticipants = Course::getNombreParticipants();

    for (int i = 0; i < nombreParticipants; i++)
    {
        Competiteur* c = lesParticipants[i].getCompetiteur();
        cout <<" - Dossard: " << lesParticipants[i].getNumDossard() << " | " <<
           "Nom: " << c->getNomCompetiteur() << " | " << 
            "Prenom: " << c->getPrenomCompetiteur() << " | " <<
            " WCSL: " << c->getClassementWCSL() << " | " <<
            " FIS: " << c->getClassementFIS() << endl; // << lesParticipants[i].getgetDossard() << endl;

		if (i == 6) {
			cout << "Fin de la premiere serie de dossards" << endl;
		}
        else if (i == 14) {
            cout << "Fin de la deuxieme serie de dossards" << endl;
		}
        else if (i == 29) {
            cout << "Fin de la troisieme série de dossards" << endl;
        }
    }
}


Course_Slalom::~Course_Slalom()
{

}