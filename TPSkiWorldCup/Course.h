#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include "Competiteur.H"

class Course
{
public:
    Course();  // Constructeur par défaut

    Course(std::string emplacement, std::string date, Competiteur participants[]);

    virtual void traitementDossards() = 0;  // Méthode virtuelle pure pour l'attribution des dossards (implémentation spécifique dans les sous-classes)
    virtual void afficherParticipants();  // Méthode pour afficher les participants

private:
    Competiteur participants[100];
    std::string nomCompetition;
    std::string dateCompetition;

    int nbParticipants;  // Nombre de participants dans la course


protected:
    void classerLesParticipants();  // Méthode pour classer les participants (à utiliser dans les sous-classes)
};

#endif /* COURSE_HPP */


