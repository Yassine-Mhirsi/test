#pragma once
#include "Personne.h"
#include <iostream>
#include <vector>

using namespace std;
class Enseignant : public Personne
{
    int CNSS;

public:
    Enseignant() : Personne(), CNSS(0) {};
    Enseignant(int _id, const string& _nom, const string& _prenom, const string& _mail, int _numInsc)
        : Personne(_id, _nom, _prenom, _mail), CNSS(_numInsc) {}
};