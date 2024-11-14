#include "Competiteur.h"

Competiteur::Competiteur()
{
}

Competiteur::Competiteur(int num, string nom, string prenom, int FIS, int classementWCSL)
{
	this->numeroCompetiteur = num;
	this->nomCompetiteur = nom;
	this->prenomCompetiteur = prenom;
	this->classementFIS = FIS;
	this->classementWCSL = classementWCSL;
}

int Competiteur::GetClassementFIS()
{
	return this->classementFIS;
}

int Competiteur::GetClassementWCSL()
{
	return this->classementWCSL;
}

Competiteur::~Competiteur()
{
}
