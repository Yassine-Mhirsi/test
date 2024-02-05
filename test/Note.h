#pragma once
#include <iostream>
#include "Matiere.h"
#include "Etudiant.h"

using namespace std;

class Note
{
	Matiere Mat;
	Etudiant Etu;
	float note;
	string type;

public:

	Note();
	Note(Matiere, Etudiant, float, string);
	float MoyMat(vector<Note>& notes);
	//float MoyGM(const vector<Note>& notes);

};


