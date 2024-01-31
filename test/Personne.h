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

    // Getters
    int getId() const { return Id; }
    string getNom() const { return Nom; }
    string getPrenom() const { return Prenom; }
    string getMail() const { return Mail; }

    // Setters
    void setId(int _id) { Id = _id; }
    void setNom(const string& _nom) { Nom = _nom; }
    void setPrenom(const string& _prenom) { Prenom = _prenom; }
    void setMail(const string& _mail) { Mail = _mail; }

};