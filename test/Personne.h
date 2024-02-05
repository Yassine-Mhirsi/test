#pragma once
#include <iostream>

using namespace std;

class Personne
{
	int Id;
	string Nom;
	string Prenom;
	string Mail;

public:
	Personne();
	Personne(int, string, string, string);

};