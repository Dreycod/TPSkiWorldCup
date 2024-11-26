// Participation.hpp
#include "Competiteur.h"
#ifndef PARTICIPATION_HPP
#define PARTICIPATION_HPP

class Participation {
private:
    int numDossard;   // Numéro de dossard
    int classement;   // Classement calculé dans course slalom
    int scoreFIS;     // Score FIS
    int scoreWCSL;    // Score WCSL
    int scoreTotal;
	Competiteur* competiteur; // Lien avec l'objet Competiteur
public:
	Participation(int i, int x, Competiteur* c);
    Participation();

    void setNumDossard(int dossard);
    int getNumDossard();


    void setClassement(int classement);
    int getClassement();

	Competiteur* getCompetiteur();

};

#endif // PARTICIPATION_HPP
