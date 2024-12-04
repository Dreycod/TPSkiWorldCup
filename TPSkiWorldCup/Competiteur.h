#ifndef COMPETITEUR_HPP
#define COMPETITEUR_HPP

#include <string>
using namespace std;

class Competiteur {
private:
    int numeroCompetiteur;
    std::string nomCompetiteur;
    std::string prenomCompetiteur;
    int classementFIS;
    int classementWCSL;
public:
	Competiteur(int numero, std::string nomCompetiteur, std::string prenomCompetiteur, int FIS, int WCSL);
    int getClassementFIS();
	int getClassementWCSL();
	std::string getNomCompetiteur();
	std::string getPrenomCompetiteur();
	~Competiteur();
};

#endif // COMPETITEUR_HPP
