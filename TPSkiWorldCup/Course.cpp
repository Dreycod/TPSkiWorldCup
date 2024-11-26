#include "Course.h"
#include <iostream>
#include <string>

using namespace std;




// Constructeur par défaut
Course::Course() : nbParticipants(0) {}


// Constructeur avec paramètres
Course::Course(std::string emplacement, std::string date, Competiteur participants[])
{
    nomCompetition = emplacement;
    dateCompetition = date;

    for (int i = 0; i < 100; ++i) {
        participants[i] = participants[i];
    }

    std::cout << "localisation " << emplacement << " le " << date << endl;

}



// Méthode pour afficher les participants (méthode par défaut)
void Course::afficherParticipants()
{
    for (int i = 0; i < nbParticipants; ++i)
    {
        participants[i].afficheEtat();
    }
}
