#ifndef COURSE_HPP
#define COURSE_HPP

#include <string>
#include "Participation.h"

class Course
{
private:
    string nomCompetition;
    string dateCompetition;
	int nombreParticipants;
protected:
    Participation* lesParticipants;
    void classerLesParticipantsFIS(bool ordered);  // M�thode pour classer les participants par FIS (� utiliser dans les sous-classes)
    void classerLesParticipantsParDossards(bool ordered);
	void classerLesParticipantsWCSL(bool ordered);  // M�thode pour classer les participants par WCSL (� utiliser dans les sous-classes)
public:
    Course(string emplacement, string date, Participation * lesParticipants);
    Course();  // Constructeur par d�faut
	int getNombreParticipants();
    ~Course();
};

#endif /* COURSE_HPP */


