#pragma once
#include "Matiere.h"
#include "Etudiant.h"
#include <iostream>
using namespace std;

class Note
{
    Matiere Mat;
    Etudiant Etu;
    float note;
    string type;

public:
    // Constructeur par defaut
    Note() : Mat(), Etu(), note(0), type("") {};
    void setNote(float n) { note = n; }
};