#pragma once
#include "GroupeModule.h"
#include "Etudiant.h"
#include <iostream>
#include <vector>

using namespace std;
class Groupe
{
    string IdGRP;
    string Niveau;
    string Diplome;
    string Specialite;
    int Num_G;
    vector<GroupeModule> ListeModules;
    vector<Etudiant> ListeEtudiants;

public:
    // Constructeur par defaut
    Groupe() : IdGRP(""), Niveau(""), Diplome(""), Specialite(""), Num_G(0), ListeModules(), ListeEtudiants() {};

    Groupe(const string& _id, const string& _niv, const string& _dip, const string& _spec, int& _num);

};