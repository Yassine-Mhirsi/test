#include "Personne.h"

Personne::Personne() : Id(0), Nom(""), Prenom(""), Mail("") {}
Personne::Personne(int id, string nom, string prenom, string mail) :Id(id), Nom(nom), Prenom(prenom), Mail(mail) {}
