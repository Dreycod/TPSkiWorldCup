#include <iostream>
#include "Participation.h"
#include "Competiteur.h"
using namespace std;

//Constructeur

Participation::Participation() : numDossard(0), classement(0) {}

Participation::Participation(int dossard, int classement, Competiteur * C) : numDossard(dossard), classement(classement) {
	this->competiteur = C;
}

//dossard

void Participation::setNumDossard(int dossard) {  //setter num dossard
    this->numDossard = dossard;
}

int Participation::getNumDossard() { //getter num dossard
    return numDossard;
}





//classement

void Participation::setClassement(int classement) {  //setter classement
    this->classement = classement;
}

int Participation::getClassement() { //getter classement
    return classement;
}




// competiteur
Competiteur* Participation::getCompetiteur() {
	return this->competiteur;
}