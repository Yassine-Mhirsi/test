#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Personne
{
	int Id;
	string Nom;
	string Prenom;
	string Mail;

public:
	Personne();
	Personne(const int& _id, const string& _nom, const string& _prenom, const string& _mail);
	~Personne();
	void AjoutPerso();
};