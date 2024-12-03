#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include "Participation.h"

class Course
{
private:
    string nomCompetition;
    string dateCompetition;
protected:
    Participation* lesParticipants;
    void classerLesParticipants(bool ordered);  // Méthode pour classer les participants (à utiliser dans les sous-classes)
    void classerLesParticipantsFIS(bool ordered);  // Méthode pour classer les participants par FIS (à utiliser dans les sous-classes)
    void classerLesParticipantsParDossards(bool ordered);
	void classerLesParticipantsWCSL(bool ordered);  // Méthode pour classer les participants par WCSL (à utiliser dans les sous-classes)
    Participation* getLesParticipants();
public:
    Course(string emplacement, string date, Participation * lesParticipants);
    Course();  // Constructeur par défaut

    virtual void traitementDossards() = 0;
    ~Course();
};

#endif /* COURSE_HPP */


