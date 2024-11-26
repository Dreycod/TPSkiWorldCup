// Participation.hpp

#ifndef PARTICIPATION_HPP
#define PARTICIPATION_HPP

class Participation {
private:
    int numDossard;   // Numéro de dossard
    int classement;   // Classement calculé dans course slalom
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
