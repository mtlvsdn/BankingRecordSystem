#include "heading.h"
#include <iostream>
#include <fstream>

extern Record recordedTransaction;

void readRecord() {
	std::string firstName, lastName, CNP;
	int numberOfRecord;
	float amount;
	std::cout << "Number of Record: ";
	std::cin >> numberOfRecord;
	std::cout << "First Name: ";
	std::cin >> firstName;
	std::cout << "Last Name: ";
	std::cin >> lastName;
	std::cout << "CNP: ";
	std::cin >> CNP;
	std::cout << "Amount: ";
	std::cin >> amount;

	Record recordedTransaction(firstName, lastName, CNP, numberOfRecord, amount);
	recordedTransaction.addRecord();
}

//void addRecord() {
//	std::ofstream recordsFile("record.csv");
//	recordsFile << recordedTransaction.numberOfRecord;
//	recordsFile << recordedTransaction.firstName;
//	recordsFile << recordedTransaction.lastName;
//	recordsFile << recordedTransaction.CNP;
//	recordsFile << recordedTransaction.amount;
//}
