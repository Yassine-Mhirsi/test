#pragma once
#include <iostream>
#include "Personne.h"

using namespace std;
class Enseignant : public Personne
{
	int CNSS;

public:
	Enseignant();
	Enseignant(int, string, string, string, int);
};