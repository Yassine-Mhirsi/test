#ifndef GROUPEMODULE_H
#define GROUPEMODULE_H

#pragma once
#include <iostream>
#include <string>
#include "Matiere.h"

using namespace std;
class GroupeModule
{
	string IdGM;
	string NomGM;
	float CoefGM;
	vector<Matiere> ListeMat;

public:
	GroupeModule();
	GroupeModule(string, string, float, vector<Matiere>);
};

#endif
