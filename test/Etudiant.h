#pragma once
#include <iostream>
#include "Personne.h"

using namespace std;
class Etudiant : public Personne
{
	int Num_insc;
public:
	Etudiant();
	Etudiant(int, string, string, string, int);
};