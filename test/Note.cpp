#include "Note.h"

Note::Note() :note(0), type("") {}
Note::Note(Matiere mat, Etudiant etu, float note, string type) :Mat(mat), Etu(etu), note(note), type(type) {}

float Note::MoyMat(vector<Note>& notes)
{
	float SommeDesNotes = 0;
	for (const auto& n : notes) {
		SommeDesNotes = SommeDesNotes + n.note;
	}

	if (notes.size() > 0) {
		return SommeDesNotes / notes.size();
	}
	else {
		return 0.0;
	}
}


// Calculate and display the average note for the Matiere
//Note noteObj;
//float moyenne = noteObj.MoyMat(notes_M1);
//cout << "Average note for the Matiere: " << moyenne << std::endl;


