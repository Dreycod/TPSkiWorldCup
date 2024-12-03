#include "Course_Slalom.h"
#include <iostream>
#include <random> //random
#include <algorithm> //sort

using namespace std;

Course_Slalom::Course_Slalom(string nomCompetition, string dateCompetition, Participation* lesParticipatnts) : Course(nomCompetition, dateCompetition, lesParticipatnts) {
}

int Course_Slalom::attribuerDossard(int borneInf, int borneSup) 
{

    Participation* lesParticipants = this->getLesParticipants();
    int numeroDossard = 1;

    if (borneSup <= 7) {
        for (int i = borneInf; i <= borneSup; i++) {
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
    else if (borneSup <= 15) {
        for (int i = borneInf; i <= borneSup; i++) {
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
    else if (borneInf > 15 && borneSup <= 30) {
        for (int i = borneInf; i <= borneSup; i++) {
            lesParticipants[i].setNumDossard(i);
            historiqueDossards[i] = true;
        }
    }
    else if (borneInf > 30) {
        for (int i = borneInf; i <= borneSup; i++) {
            lesParticipants[i].setNumDossard(i);
            historiqueDossards[i] = true;
        }
    }
}

void Course_Slalom::traitementDossards() {
    int nombreParticipants = lesParticipants->getNombreParticipants();
    bool ordered = false;
    Course::classerLesParticipantsFIS(ordered);
	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
	afficherParticipants();
	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
	attribuerDossard(0, 7);
	attribuerDossard(8, 15);
	attribuerDossard(16, 30);
	Course::classerLesParticipantsFIS(ordered);
	attribuerDossard(31, 40);
	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
	afficherParticipants();
	cout << "-------------------------------------------------------------------------------------------------------------------------------" << endl;
    
	attribuerDossard(30, nombreParticipants);
	Course::classerLesParticipantsParDossard(ordered);  
}



// Affichage des participants
void Course_Slalom::afficherParticipants() {
	Participation* lesParticipants = Course::getLesParticipants();
	int  nombreParticipants = lesParticipants[0].getNombreParticipants();
    cout << "---- Par Dossard ----" << endl;

	cout << nombreParticipants << " participants" << endl;

    for (int i = 0; i < nombreParticipants;i++)
    {
		Competiteur* c = lesParticipants[i].getCompetiteur();
		cout << i + 1 << ". " << c->getNomCompetiteur() << " " << c->getPrenomCompetiteur() << " | Dossard : " << lesParticipants[i].getNumDossard() << " | Classement FIS : " << c->getClassementFIS() << " | Classement WCSL : " << c->getClassementWCSL() << endl;
    }
}

Course_Slalom::~Course_Slalom() {
	
}
