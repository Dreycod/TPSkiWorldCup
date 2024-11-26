#include "Course.h"
#include <iostream>
#include <string>

using namespace std;




// Constructeur par d�faut
Course::Course() : nbParticipants(0) {}


// Constructeur avec param�tres
Course::Course(std::string emplacement, std::string date, Competiteur participants[])
{
    nomCompetition = emplacement;
    dateCompetition = date;

    for (int i = 0; i < 100; ++i) {
        participants[i] = participants[i];
    }

    std::cout << "localisation " << emplacement << " le " << date << endl;

}



// M�thode pour afficher les participants (m�thode par d�faut)
void Course::afficherParticipants()
{
    for (int i = 0; i < nbParticipants; ++i)
    {
        participants[i].afficheEtat();
    }
}
