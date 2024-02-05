#pragma once
#include <iostream>
#include "Enseignant.h"
#include <vector>

using namespace std;
class Matiere
{
	string IdMat;
	string NomMat;
	float Coef;
	Enseignant Ens;

public:
	Matiere();
	Matiere(string, string, float, Enseignant);
	//float MoyGM(const vector<Matiere>& matieres);
};
