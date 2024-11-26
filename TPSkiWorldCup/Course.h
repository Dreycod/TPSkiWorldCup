#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include "Competiteur.H"

class Course
{
public:
    Course();  // Constructeur par d�faut

    Course(std::string emplacement, std::string date, Competiteur participants[]);

    virtual void traitementDossards() = 0;  // M�thode virtuelle pure pour l'attribution des dossards (impl�mentation sp�cifique dans les sous-classes)
    virtual void afficherParticipants();  // M�thode pour afficher les participants

private:
    Competiteur m_participants[100];
    std::string m_nomCompetition;
    std::string m_dateCompetition;

    int m_nbParticipants;  // Nombre de participants dans la course


protected:
    void classerLesParticipants();  // M�thode pour classer les participants (� utiliser dans les sous-classes)
};

#endif /* COURSE_HPP */


