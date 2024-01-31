#pragma once
#include "Personne.h"
#include <iostream>
#include <vector>

using namespace std;
class Etudiant : public Personne
{
    int Num_insc;

public:
    // Constructeur par défaut
    Etudiant() : Personne(), Num_insc(0) {};

    Etudiant(int _id, const string& _nom, const string& _prenom, const string& _mail, int _numInsc)
        : Personne(_id, _nom, _prenom, _mail), Num_insc(_numInsc) {}
};