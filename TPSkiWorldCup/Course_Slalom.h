#ifndef COURSE_SLALOM_HPP
#define COURSE_SLALOM_HPP

#include <string>
#include "Competiteur.h"
#include "Course.h"

class Course_Slalom : public Course {
private:
    Competiteur m_participants[100]; // Tableau des comp�titeurs
    bool dossardsAttribues[101] = { false }; // Suivi des dossards attribu�s (1 � 100)
    std::string m_emplacement;
    std::string m_date;
    int m_nbParticipant;

    int attribuerDossard(int borneInf, int borneSup); // M�thode priv�e pour attribuer un dossard unique

public:
    Course_Slalom();
    Course_Slalom(std::string emplacement, std::string date, Competiteur participants[]);

    void traitementDossards(); // M�thode sp�cifique au slalom pour traiter les dossards
    void afficherParticipants(); // Afficher les participants avec les dossards
};

#endif // COURSE_SLALOM_HPP
