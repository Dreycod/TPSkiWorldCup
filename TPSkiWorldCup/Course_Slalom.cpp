#include "Course_Slalom.h"
#include "Course.h"
#include "Participation.h"
#include <iostream>
#include <string>
using namespace std;

Course_Slalom::Course_Slalom(string nom, string date, Participation* lesParticipants)
{
	this->nom = nom;
	this->date = date;
	Course::setLesParticipats(lesParticipants);
}

void Course_Slalom::traitementDossards()
{
	bool ordered = false; 
	
	Course::classerLesParticipantsWCSL(ordered);
	attribuerDossard(1,7);
	attribuerDossard(8, 15);

	attribuerDossard(16, 30);
	Course::classerLesParticipantsFIS(ordered);
	attribuerDossard(30, 100);
	Course::classerLesParticipantsParDossards(!ordered);
}

int getRandomNum(int debut, int fin)
{
	int randomNum = rand() % fin + debut;
	return randomNum;
}

void Course_Slalom::attribuerDossard(int debut, int fin)
{
	

	if (debut == 16)
	{
		for (int i = debut; i <= fin; i++)
		{
			Participation Participant = Course::getParticipant(i);
			Participant.setnumDossard(i);

		}

	}
	else if (debut == 1 || debut == 8)
	{
		int* dossards = new int[8];
		int count = 0;

		for (int i = debut; i <= fin; i++)
		{
			int randomNum;
			bool isUnique;

			do {
				randomNum = getRandomNum(debut, fin);
				isUnique = true;

				for (int j = 0; j < count; j++)
				{
					if (dossards[j] == randomNum)
					{
						isUnique = false;
						break;
					}
				}
			} while (!isUnique);

			dossards[count++] = randomNum;

			lesParticipants[i].setnumDossard(randomNum);
		}

		delete[] dossards;

	}
	else {
		for (int i = debut; i <= fin; i++)
		{
		
		}
	}

		
		

}

Course_Slalom::~Course_Slalom()
{
}
