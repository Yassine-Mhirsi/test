#include "Groupe.h"

Groupe::Groupe() : IdGRP(""), Niveau(""), Diplome(""), Specialite(""), Num_G(0), ListeModules(), ListeEtudiants() {};
Groupe::Groupe(string id, string niveau, string diplome, string specialite, int num, vector<GroupeModule> listemodules, vector<Etudiant> listeetudiants)
	: IdGRP(id), Niveau(niveau), Diplome(diplome), Specialite(specialite), Num_G(num), ListeModules(listemodules), ListeEtudiants(listeetudiants) {};
