// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <sqlite3.h>
#include <string>
#include "Personne.h"

int main()
{
	//
	//	sqlite3* db;
	//	int rc = sqlite3_open("example.db", &db);
	//
	//	if (rc) {
	//		std::cerr << "Cannot open database: " << sqlite3_errmsg(db) << std::endl;
	//		return rc;
	//	}
	//	else {
	//		std::cout << "Opened database successfully" << std::endl;
	//	}
	//
	//	// SQL statement to create a table
	//	const char* createTableSQL = "CREATE TABLE IF NOT EXISTS users ("
	//		"id INTEGER PRIMARY KEY AUTOINCREMENT,"
	//		"name TEXT NOT NULL,"
	//		"age INTEGER NOT NULL);";
	//
	//	// Execute the SQL statement
	//	rc = sqlite3_exec(db, createTableSQL, 0, 0, 0);
	//
	//	if (rc != SQLITE_OK) {
	//		std::cerr << "Cannot create table: " << sqlite3_errmsg(db) << std::endl;
	//		return rc;
	//	}
	//	else {
	//		std::cout << "Table created successfully" << std::endl;
	//	}
	//	const char* name = "John Doe";
	//	int age = 25;
	//	// SQL statement to insert data into the table
	//	const char* insertDataSQL = "INSERT INTO users (name, age) VALUES (' %s', '%d');";
	//	char sql[100];  // Assuming a maximum length for the SQL query
	//
	//	// Format the SQL query with variables
	//	snprintf(sql, sizeof(sql), insertDataSQL, name, age);
	//
	//	// Execute the SQL statement
	//	rc = sqlite3_exec(db, insertDataSQL, 0, 0, 0);
	//
	//	if (rc != SQLITE_OK) {
	//		std::cerr << "Cannot insert data: " << sqlite3_errmsg(db) << std::endl;
	//		return rc;
	//	}
	//	else {
	//		std::cout << "Data inserted successfully" << std::endl;
	//	}
	//
	//	// Close the database connection
	//	sqlite3_close(db);
	Personne P1;
	P1.AjoutPerso();
	return 0;
}