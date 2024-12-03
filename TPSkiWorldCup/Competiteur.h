#ifndef COMPETITEUR_HPP
#define COMPETITEUR_HPP

#include <string>
class Competiteur {
private:
    int numeroCompetiteur;
    string nomCompetiteur;
    string prenomCompetiteur;
    int classementFIS;
    int classementWCSL;
public:
	Competiteur(int numero, std::string nom, std::string prenom, int FIS, int WCSL);
    int getClassementFIS();
	int getClassementWCSL();
	std::string getNomCompetiteur();
	std::string getPrenomCompetiteur();
	~Competiteur();
};

#endif // COMPETITEUR_HPP
