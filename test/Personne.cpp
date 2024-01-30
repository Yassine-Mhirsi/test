#include "Personne.h"
#include <sqlite3.h>
#include <string>

Personne::Personne() : Id(-1), Nom(""), Prenom(""), Mail("") {};

Personne::Personne(const int& _id, const string& _nom, const string& _prenom, const string& _mail)
	: Id(_id), Nom(_nom), Prenom(_prenom), Mail(_mail) {}


Personne::~Personne() {}
void Personne::AjoutPerso()
{
	cout << "Donner Nom : ";
	getline(cin, Nom);
	cout << "Donner Prenom : ";
	getline(cin, Prenom);
	cout << "Donner Mail : ";
	getline(cin, Mail);
	sqlite3* db;
	char* errMsg = nullptr;
	int rc = sqlite3_open("example.db", &db);
	if (rc) {
		std::cerr << "Cannot open database: " << sqlite3_errmsg(db) << std::endl;
		return;
	}
	else {
		std::cout << "Opened database successfully" << std::endl;

		// Set UTF-8 encoding
		sqlite3_exec(db, "PRAGMA encoding = 'UTF-8';", nullptr, nullptr, nullptr);
	}

	const char* sqlCreateTable = "CREATE TABLE IF NOT EXISTS Personne ("
		"id INTEGER PRIMARY KEY AUTOINCREMENT,"
		"nom TEXT NOT NULL COLLATE NOCASE,"
		"prenom TEXT NOT NULL COLLATE NOCASE,"
		"mail TEXT NOT NULL COLLATE NOCASE);";
	rc = sqlite3_exec(db, sqlCreateTable, nullptr, nullptr, &errMsg);
	if (rc != SQLITE_OK) {
		std::cerr << "SQL error: " << errMsg << std::endl;
		sqlite3_free(errMsg);
		sqlite3_close(db);
		return;
	}
	else {
		cout << "Table created successfully" << endl;
	}
	const char* sqlInsertData = "INSERT INTO Personne (nom, prenom, mail) VALUES ('%s','%s','%s');";
	char sql[100];  // Assuming a maximum length for the SQL query

	// Format the SQL query with variables
	snprintf(sql, sizeof(sql), sqlInsertData, Nom.c_str(), Prenom.c_str(), Mail.c_str());

	rc = sqlite3_exec(db, sql, nullptr, nullptr, &errMsg);
	if (rc != SQLITE_OK) {
		std::cerr << "SQL error: " << errMsg << std::endl;
		sqlite3_free(errMsg);
		sqlite3_close(db);
		return;
	}
	else {
		cout << "Data Inserted successfullyyy" << endl;
	}

	const char* sqlQueryData = "SELECT * FROM Personne;";
	sqlite3_stmt* stmt;

	rc = sqlite3_prepare_v2(db, sqlQueryData, -1, &stmt, nullptr);
	if (rc != SQLITE_OK) {
		std::cerr << "SQL error: " << errMsg << std::endl;
		sqlite3_free(errMsg);
		sqlite3_close(db);
		return;
	}

	while ((rc = sqlite3_step(stmt)) == SQLITE_ROW) {
		int id = sqlite3_column_int(stmt, 0);
		const unsigned char* name = sqlite3_column_text(stmt, 1);
		const unsigned char* prenom = sqlite3_column_text(stmt, 2);
		const unsigned char* mail = sqlite3_column_text(stmt, 3);

		// Check if values are not NULL before printing
		std::cout << "ID: " << id << ", Nom: " << (name ? reinterpret_cast<const char*>(name) : "NULL")
			<< ", Prenom: " << (prenom ? reinterpret_cast<const char*>(prenom) : "NULL")
			<< ", Mail: " << (mail ? reinterpret_cast<const char*>(mail) : "NULL") << std::endl;
	}


	sqlite3_finalize(stmt);
	sqlite3_close(db);
};