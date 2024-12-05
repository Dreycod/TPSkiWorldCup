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
	this->nombreParticipants = Participation::getNombreParticipants();
}

Course::Course()
{
	this->nomCompetition = "";
	this->dateCompetition = "";
	this->lesParticipants = NULL;
}


void Course::classerLesParticipantsWCSL(bool ordered)
{
	Participation* lesParticipants = this->lesParticipants;
	
	
	// Boolean to track if a swap occurred
	bool swapped;

	do {
		swapped = false; // Reset swap flag

		int i = 0;
		while (i < nombreParticipants - 1) {
			int classementA = lesParticipants[i].getCompetiteur()->getClassementWCSL();
			int classementB = lesParticipants[i + 1].getCompetiteur()->getClassementWCSL();

			// If out of order, swap them
			if (classementA < classementB) {
				Participation temp = lesParticipants[i];
				lesParticipants[i] = lesParticipants[i + 1];
				lesParticipants[i + 1] = temp;
				swapped = true; // Mark that a swap occurred
			}
			i++; // Move to the next pair
		}
	} while (swapped); // Continue until no swaps occur
	

}

void Course::classerLesParticipantsFIS(bool ordered)
{
	Participation* lesParticipants = this->lesParticipants;

	// Boolean to track if a swap occurred
	bool swapped;

	do {
		swapped = false; // Reset swap flag

		int i = 30;
		while (i < nombreParticipants - 1) {
			int classementA = lesParticipants[i].getCompetiteur()->getClassementFIS();
			int classementB = lesParticipants[i + 1].getCompetiteur()->getClassementFIS();

			// If out of order, swap them
			if (classementA < classementB) {
				Participation temp = lesParticipants[i];
				lesParticipants[i] = lesParticipants[i + 1];
				lesParticipants[i + 1] = temp;
				swapped = true; // Mark that a swap occurred
			}
			i++; // Move to the next pair
		}
	} while (swapped); // Continue until no swaps occur

}


void Course::classerLesParticipantsParDossards(bool ordered)
{
	Participation* lesParticipants = this->lesParticipants;

	// Boolean to track if a swap occurred
	bool swapped;

	do {
		swapped = false; // Reset swap flag

		int i = 0;
		while (i < nombreParticipants - 1) {
			int classementA = lesParticipants[i].getNumDossard();
			int classementB = lesParticipants[i + 1].getNumDossard();

			// If out of order, swap them
			if (classementA > classementB) {
				Participation temp = lesParticipants[i];
				lesParticipants[i] = lesParticipants[i + 1];
				lesParticipants[i + 1] = temp;
				swapped = true; // Mark that a swap occurred
			}
			i++; // Move to the next pair
		}
	} while (swapped); // Continue until no swaps occur
}

int Course::getNombreParticipants()
{
	return this->nombreParticipants;
}

Course::~Course()
{
}