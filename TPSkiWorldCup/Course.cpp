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
}

void Course::classerLesParticipantsFIS(bool ordered)
{
}

void Course::classerLesParticipantsParDossards(bool ordered)
{
}

