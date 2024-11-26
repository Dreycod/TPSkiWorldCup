#ifndef PARTICIPATION_HPP
#define PARTICIPATION_HPP
#include <string>  // Use angle brackets and include the standard namespace
#include "Competiteur.h"

using namespace std;
class Competiteur{};
class Participation
{
private:
	int numDossard;
	int classement;
	Competiteur leCompetiteur;
public:

	Participation(int num, int classement, Competiteur * Comp);
	Participation();
	void setnumDossard(int numDossard);
	int getNumDossard();
	Competiteur getleCompetiteur();
	~Participation();
};

#endif