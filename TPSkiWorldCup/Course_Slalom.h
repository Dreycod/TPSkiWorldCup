#ifndef COURSE_SLALOM_HPP
#define COURSE_SLALOM_HPP

#include <string>
#include "Competiteur.h"
#include "Participation.h"
#include "Course.h"

class Course_Slalom : public Course {
private:
    Participation participants[100]; // Tableau des compétiteurs
    bool dossardsAttribues[101] = { false }; // Suivi des dossards attribués (1 à 100)
    std::string emplacement;
    std::string date;
    int nbParticipant;

    int attribuerDossard(int borneInf, int borneSup); // Méthode privée pour attribuer un dossard unique

public:
    Course_Slalom();
    Course_Slalom(std::string emplacement, std::string date, Participation participants[]);

    void traitementDossards(); // Méthode spécifique au slalom pour traiter les dossards
    void afficherParticipants(); // Afficher les participants avec les dossards
};

#endif // COURSE_SLALOHPP
