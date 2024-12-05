#ifndef COURSE_SLALOM_HPP
#define COURSE_SLALOM_HPP

#include <iostream>
#include <string>

#include "Course.h"
#include "Participation.h"

class Course_Slalom : public Course {
private:
    void attribuerDossard(int borneInf, int borneSup); // M�thode priv�e pour attribuer un dossard unique
public:
    Course_Slalom(string emplacement, string date, Participation* lesParticipants);
	~Course_Slalom();
    void traitementDossards(); // M�thode sp�cifique au slalom pour traiter les dossards
    void afficherLesParticipants(); // Afficher les participants avec les dossards
};

#endif // COURSE_SLALOHPP
