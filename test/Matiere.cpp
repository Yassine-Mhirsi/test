#include "Matiere.h"


Matiere::Matiere() : IdMat(""), NomMat(""), Coef(0), Ens() {};
Matiere::Matiere(string id, string nomMat, float coef, Enseignant ens)
	: IdMat(id), NomMat(nomMat), Coef(coef), Ens(ens) {}



//float Matiere::MoyGM(const vector<Matiere>& matieres) {
//	float totalWeightedGrade = 0;
//	float totalCoefficient = 0;
//
//	for (const auto& m : matieres) {
//		float moyenneMatiere = m.MoyMat();
//		totalWeightedGrade += moyenneMatiere * m.GetCoef();
//		totalCoefficient += m.GetCoef();
//	}
//
//	if (totalCoefficient != 0) {
//		return totalWeightedGrade / totalCoefficient;
//	}
//	else {
//		throw std::domain_error("Division by zero: total coefficient is zero.");
//	}
//}
