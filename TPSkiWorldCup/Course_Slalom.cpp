#include "Course_Slalom.h"
#include <iostream>
#include <random> //random
#include <algorithm> //sort


using namespace std;

// Constructeur par d�faut
Course_Slalom::Course_Slalom() : m_nbParticipant(0) {}


// Constructeur avec param�tres
Course_Slalom::Course_Slalom(std::string emplacement, std::string date, Competiteur participants[])
    : m_emplacement(emplacement), m_date(date), m_nbParticipant(100) {

    std::cout << "localisation " << emplacement << " le " << date << endl;
    for (int i = 0; i < 100; ++i) {
        m_participants[i] = participants[i];
    }
}

// M�thode priv�e pour attribuer un num�ro de dossard unique
int Course_Slalom::attribuerDossard(int borneInf, int borneSup) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(borneInf, borneSup);

    int dossard;
    do {
        dossard = dis(gen);
    } while (dossardsAttribues[dossard]);

    dossardsAttribues[dossard] = true;
    return dossard;
}


void Course_Slalom::traitementDossards() {


    // Trier d'abord par WCSL pour pouvoir appliquer les r�gles de tirage au sort pour les 7 premiers et les 8 suivants
    std::sort(m_participants, m_participants + m_nbParticipant, [](Competiteur& a, Competiteur& b) {
        return a.getClassementWCSL() > b.getClassementWCSL(); // Trier par WCSL d�croissant
        });

    // Trier d'abord par WCSL pour pouvoir appliquer les r�gles de tirage au sort pour les 7 premiers et les 8 suivants
    std::sort(m_participants, m_participants + m_nbParticipant, [](Competiteur& a, Competiteur& b) {
        return a.getClassementWCSL() > b.getClassementWCSL(); // Trier par WCSL d�croissant
        });

    // �tape 1 : Attribution al�atoire des dossards pour les 7 premiers
    for (int i = 0; i < 7; ++i) {
        int dossard = attribuerDossard(1, 7); // Tirage au sort pour les 7 premiers (dossards 1 � 7)
        m_participants[i].setNumDossard(dossard);
        m_participants[i].setClassement(i + 1);
    }

    // �tape 2 : Attribution al�atoire des dossards pour les 8 suivants (dossards 8 � 15)
    for (int i = 7; i < 15; ++i) {
        int dossard = attribuerDossard(8, 15); // Tirage au sort pour les 8 suivants (dossards 8 � 15)
        m_participants[i].setNumDossard(dossard);
        m_participants[i].setClassement(i + 1);
    }

    // �tape 3 : Attribution des dossards 16 � 30 dans l'ordre de la WCSL
    for (int i = 15; i < 30; ++i) {
        m_participants[i].setNumDossard(i + 1); // Dossards 16 � 30 attribu�s dans l'ordre de la WCSL
        m_participants[i].setClassement(i + 1);
    }

    // �tape 4 : Trier les participants restants par points FIS
    std::sort(m_participants + 30, m_participants + m_nbParticipant, [](Competiteur& a, Competiteur& b) {

        return a.getClassementFIS() > b.getClassementFIS(); // Trier par FIS croissant pour les derniers

        });

    // �tape 5 : Attribution des dossards 31 � 100 dans l'ordre de FIS
    for (int i = 30; i < 100; ++i) {
        m_participants[i].setNumDossard(i + 1); // Dossards 31 � 100 attribu�s dans l'ordre FIS
        m_participants[i].setClassement(i + 1);
    }

    // �tape 6 : Tri final des participants par num�ro de dossard pour l'affichage
    std::sort(m_participants, m_participants + m_nbParticipant, [](Competiteur& a, Competiteur& b) {
        return a.getNumDossard() < b.getNumDossard(); // Trier par num�ro de dossard
        });

    // Affichage des participants dans l'ordre des dossards
    afficherParticipants();
}



// Affichage des participants
void Course_Slalom::afficherParticipants() {
    for (int i = 0; i < m_nbParticipant; ++i) {
        m_participants[i].afficheEtat();
    }
}
