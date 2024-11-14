#ifndef COURSE_HPP
#define COURSE_HPP
#include <string>  // Use angle brackets and include the standard namespace
#include "Participation.h"

using namespace std;
class Participation {};
class Course
{
protected:
	void classerLesParticipants();
	void classerLesParticipantsWCSL(bool ordered);
	void classerLesParticipantsFIS(bool ordered);
	void classerLesParticipantsParDossards(bool ordered);
private:
	string nomCompetition;
	string dateCompetition;
	Participation *  lesParticipants;	
public:
	Course();
	void traitementDossards();
	Participation getParticipant(int num);
	void SetAttributs(string nom, string date, Participation * lesParticipants);
	~Course();

};

#endif