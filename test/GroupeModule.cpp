#include "GroupeModule.h"


GroupeModule::GroupeModule() : IdGM(""), NomGM(""), CoefGM(0), ListeMat() {};
GroupeModule::GroupeModule(string id, string nom, float coef, vector<Matiere> matiere)
	: IdGM(id), NomGM(nom), CoefGM(coef), ListeMat(matiere) {}
