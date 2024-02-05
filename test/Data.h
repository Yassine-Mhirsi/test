#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Personne.h"
#include "Groupe.h"
#include "GroupeModule.h"
#include "Note.h"
#include "Matiere.h"

using namespace std;

Enseignant Ens1(1, "bachir", "boubou", "bachir@gmail.com", 11);
Etudiant E1(2, "yassine", "mhirsi", "yassine@gmail.com", 21318);

Matiere M1("1", "Java", 3, Ens1);
Matiere M2("2", "C++", 3, Ens1);

Matiere M3("3", "Administration des bases de donnees (DBA)", 2, Ens1);
Matiere M4("4", "Developpement des applications Web", 3, Ens1);

Matiere M5("5", "Recherche Operationnelle", 2, Ens1);
Matiere M6("6", "Probabilite & statistiques", 2, Ens1);

Matiere M7("7", "Reseaux informatiques", 3, Ens1);
Matiere M8("8", "Theorie de langages & Compilation", 3, Ens1);

Matiere M9("9", "Anglais", 1.5, Ens1);
Matiere M10("10", "Francais / Allemand", 1.5, Ens1);
Matiere M11("11", "Gestion de projet", 1, Ens1);
Matiere M12("12", "Droit des affaires et de l'innovation", 1, Ens1);

Matiere M13("13", "Projet biblio. et methodologie de recherche", 4, Ens1);


// Matiere M1
Note N1_M1(M1, E1, 15.0, "TP");
Note N2_M1(M1, E1, 12.0, "Exam");
Note N3_M1(M1, E1, 18.0, "Project");
vector<Note> notes_M1 = { N1_M1, N2_M1, N3_M1 };

// Matiere M2
Note N1_M2(M2, E1, 14.0, "TP");
Note N2_M2(M2, E1, 16.0, "Exam");
Note N3_M2(M2, E1, 17.0, "Project");
vector<Note> notes_M2 = { N1_M2, N2_M2, N3_M2 };

// Matiere M3
Note N1_M3(M3, E1, 13.0, "TP");
Note N2_M3(M3, E1, 15.0, "Exam");
Note N3_M3(M3, E1, 19.0, "Project");
vector<Note> notes_M3 = { N1_M3, N2_M3, N3_M3 };

// Matiere M4
Note N1_M4(M4, E1, 16.0, "TP");
Note N2_M4(M4, E1, 18.0, "Exam");
Note N3_M4(M4, E1, 20.0, "Project");
vector<Note> notes_M4 = { N1_M4, N2_M4, N3_M4 };

// Matiere M5
Note N1_M5(M5, E1, 17.0, "TP");
Note N2_M5(M5, E1, 16.0, "Exam");
Note N3_M5(M5, E1, 18.0, "Project");
vector<Note> notes_M5 = { N1_M5, N2_M5, N3_M5 };

// Matiere M6
Note N1_M6(M6, E1, 18.0, "TP");
Note N2_M6(M6, E1, 19.0, "Exam");
Note N3_M6(M6, E1, 20.0, "Project");
vector<Note> notes_M6 = { N1_M6, N2_M6, N3_M6 };

// Matiere M7
Note N1_M7(M7, E1, 15.0, "TP");
Note N2_M7(M7, E1, 16.0, "Exam");
Note N3_M7(M7, E1, 17.0, "Project");
vector<Note> notes_M7 = { N1_M7, N2_M7, N3_M7 };

// Matiere M8
Note N1_M8(M8, E1, 14.0, "TP");
Note N2_M8(M8, E1, 15.0, "Exam");
Note N3_M8(M8, E1, 16.0, "Project");
vector<Note> notes_M8 = { N1_M8, N2_M8, N3_M8 };

// Matiere M9
Note N1_M9(M9, E1, 13.0, "TP");
Note N2_M9(M9, E1, 14.0, "Exam");
Note N3_M9(M9, E1, 15.0, "Project");
vector<Note> notes_M9 = { N1_M9, N2_M9, N3_M9 };

// Matiere M10
Note N1_M10(M10, E1, 12.0, "TP");
Note N2_M10(M10, E1, 13.0, "Exam");
Note N3_M10(M10, E1, 14.0, "Project");
vector<Note> notes_M10 = { N1_M10, N2_M10, N3_M10 };

// Matiere M11
Note N1_M11(M11, E1, 15.0, "TP");
Note N2_M11(M11, E1, 16.0, "Exam");
Note N3_M11(M11, E1, 17.0, "Project");
vector<Note> notes_M11 = { N1_M11, N2_M11, N3_M11 };

// Matiere M12
Note N1_M12(M12, E1, 14.0, "TP");
Note N2_M12(M12, E1, 15.0, "Exam");
Note N3_M12(M12, E1, 16.0, "Project");
vector<Note> notes_M12 = { N1_M12, N2_M12, N3_M12 };

// Matiere M13
Note N1_M13(M13, E1, 17.0, "TP");
Note N2_M13(M13, E1, 18.0, "Exam");
Note N3_M13(M13, E1, 19.0, "Project");
vector<Note> notes_M13 = { N1_M13, N2_M13, N3_M13 };


vector<Matiere> GrpM1 = { M1 , M2 };
vector<Matiere> GrpM2 = { M3 , M4 };
vector<Matiere> GrpM3 = { M5, M6 };
vector<Matiere> GrpM4 = { M7, M8 };
vector<Matiere> GrpM5 = { M9, M10, M11, M12 };
vector<Matiere> GrpM6 = { M13 };


GroupeModule GM1("GM1", "Info", 6, GrpM1);
GroupeModule GM2("GM2", "Dev", 5, GrpM2);
GroupeModule GM3("GM3", "Math", 4, GrpM3);
GroupeModule GM4("GM4", "Reseaux", 6, GrpM4);
GroupeModule GM5("GM6", "Langues", 5, GrpM5);
GroupeModule GM6("GM7", "Projet", 4, GrpM6);


vector<GroupeModule> groupemodule = { GM1 ,GM2, GM3, GM4, GM5, GM6 };

vector<Etudiant> etudiant = { E1 };

Groupe G1("G1", "1ere", "ING", "INF", 2, groupemodule, etudiant);

