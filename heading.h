#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
void showMenu();
void readRecord();
void searchRecord();
void showAllRecords();

class Record {
private:
	std::string firstName;
	std::string lastName;
	std::string CNP;
	int numberOfRecord;
	double amount;

public:
	//contructor
	Record(std::string firstName, std::string lastName, std::string CNP, int numberOfRecord, float amount) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->CNP = CNP;
		this->numberOfRecord = numberOfRecord;
		this->amount = amount;
	}


	void addRecord() {
		ofstream recordsFile("record.csv", std::ios::app);
		/*recordsFile << this->firstName;
		recordsFile << this->numberOfRecord;
		recordsFile << this->firstName;
		recordsFile << this->lastName;
		recordsFile << this->CNP;
		recordsFile << this->amount;*/
		recordsFile << this->numberOfRecord << " " << this->firstName << " " << this->lastName << " "<< this->CNP << " " << this->amount << "\n";
		recordsFile.close();
	}

	void printRecords() {
		ifstream recordsFile("record.csv");
		recordsFile >> this->numberOfRecord;
		recordsFile >> this->firstName;
		recordsFile >> this->lastName;
		recordsFile >> this->CNP;
		recordsFile >> this->amount;
		cout << this->numberOfRecord << " " << this->firstName << " " << this->lastName << " " << this->CNP << " " << this->amount << "\n";
		recordsFile.close();
	}

};