#pragma once
#include "Enseignant.h"
#include <iostream>
#include <vector>

using namespace std;
class Matiere
{
    string IdMat;
    string NomMat;
    float Coef;
    Enseignant Ens;

public:
    // constructeur par defaut
    Matiere() : IdMat(""), NomMat(""), Coef(0), Ens() {};
    Matiere(const string& _id, const string& _nomMat, float _coef, Enseignant& _ens)
        : IdMat(_id), NomMat(_nomMat), Coef(_coef), Ens(_ens) {}
};
