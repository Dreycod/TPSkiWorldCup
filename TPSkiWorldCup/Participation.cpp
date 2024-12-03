#include <iostream>
#include "Participation.h"

using namespace std;
int Participation::nombreParticipants = 0;

Participation::Participation() {
	this->numDossard = 0;
	this->classement = 0;
	this->competiteur = NULL;
}

Participation::Participation(int numDossard, int classementFIS, Competiteur* competiteur) {
	this->numDossard = numDossard;
	this->classement = classementFIS;
	this->competiteur = competiteur;
	nombreParticipants++;
	cout << nombreParticipants << endl;
}

void Participation::setNumDossard(int numDossard)
{
	this->numDossard = numDossard;
}

int Participation::getNumDossard()
{
	return numDossard;
}

int Participation::getNombreParticipants()
{
	return nombreParticipants;
}

Competiteur* Participation::getCompetiteur()
{
	return competiteur;
}	

Participation::~Participation() {
}