#include "Etudiant.h"

Etudiant::Etudiant() : Personne(), Num_insc(0) {};
Etudiant::Etudiant(int id, string nom, string prenom, string mail, int numInsc)
	: Personne(id, nom, prenom, mail), Num_insc(numInsc) {}