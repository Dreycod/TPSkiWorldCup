#ifndef COMPETITEUR_HPP
#define COMPETITEUR_HPP
#include <string>  // Use angle brackets and include the standard namespace
using namespace std;
class Competiteur
{
private:
	int numeroCompetiteur;
	string nomCompetiteur;
	string prenomCompetiteur;
	int classementFIS;
	int classementWCSL;
public:
	Competiteur(int num, string nom, string prenom, int FIS, int classementWCSL);
	Competiteur();
	int GetClassementFIS();
	int GetClassementWCSL();
	~Competiteur();
};

#endif