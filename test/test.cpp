#include <iostream>
#include <sqlite3.h>
#include <string>
#include "Personne.h"

int main()
{
	Personne P1;
	//P1.AjoutPerso();
	//P1.SupprimerPersonne(2);
	P1.AfficherDonnees();
	P1.MiseAJourPersonne(1, "NewName", "NewLastName", "newemail@example.com");
	P1.AfficherDonnees();
	return 0;
}