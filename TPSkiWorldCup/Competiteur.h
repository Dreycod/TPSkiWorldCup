#ifndef COMPETITEUR_HPP
#define COMPETITEUR_HPP

#include <string>
#include "Participation.h"

class Competiteur {
private:
    int numeroCompetiteur;
    std::string nomCompetiteur;
    std::string prenomCompetiteur;
    int classementFIS;
    int classementWCSL;

    Participation participation; // Lien avec l'objet Participation


public:
    Competiteur();
    Competiteur(int numero, std::string nom, std::string prenom, int fis, int wcsl);



    int getClassementFIS();
    int getClassementWCSL();

    void setClassement(int classement); // Définit le classement via Participation
    int getClassement();


    std::string getNomCompetiteur();
    std::string getPrenomCompetiteur();

    void setNumDossard(int dossard);
    int getNumDossard();

    void afficheEtat();
};

#endif // COMPETITEUR_HPP
