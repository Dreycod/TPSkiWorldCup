#include "Competiteur.h"
#include <iostream>
#include <string>

using namespace std;


Competiteur::Competiteur(int numero, std::string nom, std::string prenom, int fis, int wcsl)
{
    this->numeroCompetiteur = numero;
    this->nomCompetiteur = nom;
    this->prenomCompetiteur = prenom;
    this->classementFIS = fis;
    this->classementWCSL = wcsl;
}

int Competiteur::getClassementFIS() {
    return classementFIS; 
}

int Competiteur::getClassementWCSL() {
    return classementWCSL;
}

string Competiteur::getNomCompetiteur() {
    return nomCompetiteur;
}

string Competiteur::getPrenomCompetiteur() {
    return prenomCompetiteur;
}

Competiteur::~Competiteur() {
}