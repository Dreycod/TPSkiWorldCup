#include "Course.h"
#include <iostream>
#include <string>
#include "Participation.h"
using namespace std;

Course::Course()
{
}

void Course::traitementDossards()
{
	
}

Participation Course::getParticipant(int i)
{
	Participation * lesParticipants = this->lesParticipants;
	return lesParticipants[i];
}

Course::~Course()
{
}

void Course::classerLesParticipants()
{
}

void Course::classerLesParticipantsWCSL(bool ordered)
{
	Participation* lesParticipants = this->lesParticipants;
	
	for (int i = 0; i < sizeof(lesParticipants); i++)
	{
		Participation Participant = lesParticipants[i];
		Competiteur* leCompetiteur = Participant.getleCompetiteur();
		int classementWSCL = lesParticipants[i].getleCompetiteur()->GetClassementWCSL()
			;	
	}
}

void Course::classerLesParticipantsFIS(bool ordered)
{
}

void Course::classerLesParticipantsParDossards(bool ordered)
{
}

