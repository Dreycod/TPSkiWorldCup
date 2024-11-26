#include <iostream>
#include "Participation.h"

using namespace std;

//Constructeur

Participation::Participation() : numDossard(0), classement(0) {}



//dossard

void Participation::setNumDossard(int dossard) {  //setter num dossard
    numDossard = dossard;
}

int Participation::getNumDossard() { //getter num dossard
    return numDossard;
}





//classement

void Participation::setClassement(int classement) {  //setter classement
    classement = classement;
}

int Participation::getClassement() { //getter classement
    return classement;
}



