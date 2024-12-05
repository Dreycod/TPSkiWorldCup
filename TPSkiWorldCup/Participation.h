// Participation.hpp

#ifndef PARTICIPATION_HPP
#define PARTICIPATION_HPP

#include "Competiteur.h"
#include <iostream>
#include <string>

using namespace std;

class Competiteur; 

class Participation {
private:
    int numDossard;   // Num�ro de dossard
    int classement;   // Classement calcul� dans course slalom
    Competiteur* competiteur;
	static int nombreParticipants;

public:
	Participation(int numDossard, int classement, Competiteur* competiteur);
	Participation();
    void setNumDossard(int numDossard);
	Competiteur* getCompetiteur();
	int getNumDossard();
	static int getNombreParticipants();
	~Participation();
};

#endif // PARTICIPATION_HPP
