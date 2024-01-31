#include "Personne.h"
#include <sqlite3.h>
#include <string>

Personne::Personne() : Id(-1), Nom(""), Prenom(""), Mail("") {};

Personne::Personne(const int& _id, const string& _nom, const string& _prenom, const string& _mail)
	: Id(_id), Nom(_nom), Prenom(_prenom), Mail(_mail) {}


Personne::~Personne() {}





