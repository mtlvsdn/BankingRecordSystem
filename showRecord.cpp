#include "heading.h"
#include <fstream>
#include <iostream>
#include <conio.h>

extern Record recordedTransaction;

void showAllRecords() {
	system("cls");
	string lastName, firstName, CNP;
	int numberOfRecord;
	double amount;
	std::ifstream recordsFile("record.csv");
	cout << "\tHistory Records";
	cout << endl;
	cout << "No. of transaction, First Name, Last Name, CNP, Amount\n";
	while (recordsFile >> numberOfRecord) {
		recordsFile >> firstName;
		recordsFile >> lastName;
		recordsFile >> CNP;
		recordsFile >> amount;
		std::cout << numberOfRecord << " " << firstName << " " << lastName << " " << CNP << " " << amount << "\n";
	}
	/*while (true) {
		if 
	}*/
	_getch();
}