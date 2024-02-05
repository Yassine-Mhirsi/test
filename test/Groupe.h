#pragma once
#include <iostream>
#include <string>
#include "GroupeModule.h"
#include "Etudiant.h"

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
	Groupe();
	Groupe(string, string, string, string, int, vector<GroupeModule>, vector<Etudiant>);
};