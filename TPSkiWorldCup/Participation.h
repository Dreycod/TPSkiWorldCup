// Participation.hpp

#ifndef PARTICIPATION_HPP
#define PARTICIPATION_HPP

class Participation {
private:
    int numDossard;   // Num�ro de dossard
    int classement;   // Classement calcul� dans course slalom
    int scoreFIS;     // Score FIS
    int scoreWCSL;    // Score WCSL
    int scoreTotal;

public:
    Participation();

    void setNumDossard(int dossard);
    int getNumDossard();


    void setClassement(int classement);
    int getClassement();


};

#endif // PARTICIPATION_HPP
