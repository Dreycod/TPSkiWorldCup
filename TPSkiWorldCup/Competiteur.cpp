#include "Competiteur.h"
#include <iostream>

Competiteur::Competiteur(){}

Competiteur::Competiteur(int numero, std::string nom, std::string prenom, int fis, int wcsl) {
    numeroCompetiteur = numero;
    nomCompetiteur = nom;
    prenomCompetiteur = prenom;
    classementFIS = fis;
    classementWCSL = wcsl;

}

int Competiteur::getClassementFIS() {
    return classementFIS; 
}


int Competiteur::getClassementWCSL() {
    return classementWCSL;
}

void Competiteur::setClassement(int classement) {
    participation.setClassement(classement);
}

std::string Competiteur::getNomCompetiteur() {
    return nomCompetiteur;
}

std::string Competiteur::getPrenomCompetiteur() {
    return prenomCompetiteur;
}

void Competiteur::setNumDossard(int dossard) {
    participation.setNumDossard(dossard);
}

int Competiteur::getNumDossard() {
    return participation.getNumDossard();
}

void Competiteur::afficheEtat() {


    std::cout << "Dossard : " << participation.getNumDossard()
        << " | Classement : " << participation.getClassement() 
        << " | Numero Competiteur : " << numeroCompetiteur
        << " | Nom : " << nomCompetiteur
        << " | Prenom : " << prenomCompetiteur
        << " | Classement FIS : " << classementFIS
        << " | Classement WCSL : " << classementWCSL << std::endl;
}
