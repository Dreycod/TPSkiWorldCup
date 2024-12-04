#include "Course.h"
#include "Participation.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

Course::Course(string nomCompetition, string dateCompetition, Participation* lesParticipants)
{
	this->nomCompetition = nomCompetition;
	this->dateCompetition = dateCompetition;
	this->lesParticipants = lesParticipants;
}

Course::Course()
{
	this->nomCompetition = "";
	this->dateCompetition = "";
	this->lesParticipants = NULL;
}

Participation* Course::getLesParticipants()
{
	return lesParticipants;
}

void Course::classerLesParticipantsWCSL(bool ordered)
{
	int nombreParticipants = lesParticipants[0].getNombreParticipants();
	Participation* lesParticipants = this->lesParticipants;
	if (ordered)
	{
		std::sort(lesParticipants, lesParticipants + nombreParticipants, [](Participation a, Participation b) { return a.getCompetiteur()->getClassementWCSL() < b.getCompetiteur()->getClassementWCSL(); });
	}
	else
	{
		std::sort(lesParticipants, lesParticipants + nombreParticipants, [](Participation a, Participation b) { return a.getCompetiteur()->getClassementWCSL() > b.getCompetiteur()->getClassementWCSL(); });
	}
}

void Course::classerLesParticipantsFIS(bool ordered)
{
	int nombreParticipants = lesParticipants[0].getNombreParticipants();
	Participation* lesParticipants = this->lesParticipants;
	if (ordered)
	{
		std::sort(lesParticipants, lesParticipants + nombreParticipants,
			[](Participation a, Participation b) {
				return a.getCompetiteur()->getClassementFIS() < b.getCompetiteur()->getClassementFIS();
			});
	}
	else
	{
		std::sort(lesParticipants, lesParticipants + nombreParticipants,
			[](Participation a, Participation b) {
				return a.getCompetiteur()->getClassementFIS() > b.getCompetiteur()->getClassementFIS();
			});
	}
}


void Course::classerLesParticipantsParDossards(bool ordered)
{
	int nombreParticipants = lesParticipants[0].getNombreParticipants();
	Participation* lesParticipants = this->lesParticipants;
	if (ordered)
	{
		std::sort(lesParticipants, lesParticipants + nombreParticipants, [](Participation a, Participation b) { return a.getNumDossard() < b.getNumDossard(); });
	}
	else
	{
		std::sort(lesParticipants, lesParticipants + nombreParticipants, [](Participation a, Participation b) { return a.getNumDossard() > b.getNumDossard(); });
	}

}

void Course::traitementDossards()
{
	//
}


Course::~Course()
{
}