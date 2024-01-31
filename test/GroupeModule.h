#pragma once
#include "Matiere.h"
#include <iostream>
#include <vector>

using namespace std;
class GroupeModule
{
    string IdGM;
    string NomGM;
    float CoefGM;
    vector<Matiere> ListeMat;

public:
    // Constructeur par défaut
    GroupeModule() : IdGM(""), NomGM(""), CoefGM(0), ListeMat() {};
    GroupeModule(const string& _id, const string& _nom, float& _coef);

    void AjouterMatiere(const Matiere& m);
};