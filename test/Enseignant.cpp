#include "Enseignant.h"


Enseignant::Enseignant() : Personne(), CNSS(0) {};
Enseignant::Enseignant(int id, string nom, string prenom, string mail, int numInsc)
	: Personne(id, nom, prenom, mail), CNSS(numInsc) {};