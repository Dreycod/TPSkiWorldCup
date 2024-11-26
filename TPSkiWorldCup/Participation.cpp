#include "Participation.h"

Participation::Participation()
{
}
 
Participation::Participation(int num, int classement, Competiteur Comp)
{
	this->numDossard = num;
	this->classement = classement;
	this->leCompetiteur = Comp;
}

void Participation::setnumDossard(int numDossard)
{
	this->numDossard = numDossard;
}

Competiteur Participation::getleCompetiteur()
{
	return this->leCompetiteur;
}

Participation::~Participation()
{
}
