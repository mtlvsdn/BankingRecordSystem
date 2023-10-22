#include "heading.h"
#include <iostream>
#include <fstream>

extern Record recordedTransaction;

void searchRecord() {
	system("cls");
	ifstream recordFile("record.csv");
	int numberOfRecordMe, numberOfRecordFile;
	string CNPMe, CNPFile;
	int selection;
	string firstName;
	string lastName;
	int amount;
	bool ok = false;
	string endOfFile;

	while (true) {
		ifstream recordFile("record.csv");
		std::cout << std::endl << "\tHow do you want to search your record by?: ";
		std::cout << "\t1. Number of Record";
		std::cout << "\t2. CNP";
		std::cout << "\t3. Exit";
		std::cout << std::endl << std::endl;
		std::cout << "Select --> ";
		std::cin >> selection;
		system("cls");
		recordFile.seekg(0, ios::beg);

		if (selection == 1) {
			std::cout << endl << "\tNumber Of Record: ";
			std::cin >> numberOfRecordMe;
			while (recordFile >> numberOfRecordFile) {
				//recordFile >> numberOfRecordFile;
				if (numberOfRecordFile == numberOfRecordMe)
				{
					ok = true;
					recordFile >> firstName;
					recordFile >> lastName;
					recordFile >> CNPMe;
					recordFile >> amount;
					//recordFile >> endOfFile;
					/*std::cout << "\tNumber of Transaction ===== First Name ===== Last Name ===== CNP ===== Amount =====\n";
					std::cout << numberOfRecordMe << " ===== " << firstName << " ===== " << lastName << " ===== " << CNPMe << " ===== " << amount << "\n";*/
					std::cout << "\n\tNumber of transaction: " << numberOfRecordMe << "\n";
					std::cout << "\tFirst name: " << firstName << "\n";
					std::cout << "\tLast name: " << lastName << "\n";
					std::cout << "\tCNP: " << CNPFile << "\n";
					std::cout << "\tAmount: " << amount << "\n";
				}
				else {
					recordFile >> firstName;
					recordFile >> lastName;
					recordFile >> CNPMe;
					recordFile >> amount;
					//recordFile >> endOfFile;
				}
				//std::cout << firstName;
			}

			if (ok == false)
				std::cout << std::endl << "\tThere is no such record!";
		}
		else if (selection == 2) {
			std::cout << endl << "\tCNP: ";
			std::cin >> CNPMe;
			while (recordFile >> numberOfRecordFile) {
				recordFile >> firstName;
				recordFile >> lastName;
				recordFile >> CNPFile;
				if (CNPMe == CNPFile)
				{
					ok = true;
					recordFile >> amount;
					//recordFile >> endOfFile;
					/*std::cout << "\tNumber of Transaction ===== First Name ===== Last Name ===== CNP ===== Amount =====";
					std::cout << numberOfRecordMe << " ===== " << firstName << " ===== " << lastName << " ===== " << CNPMe << " ===== " << amount;*/
					std::cout << "\tNumber of transaction: " << numberOfRecordFile << "\n";
					std::cout << "\tFirst name: " << firstName << "\n";
					std::cout << "\tLast name: " << lastName << "\n";
					std::cout << "\tCNP: " << CNPFile << "\n";
					std::cout << "\tAmount: " << amount << "\n";
				}
				else {
					recordFile >> amount;
					//recordFile >> endOfFile;
				}
			}

			if (ok == false)
				std::cout << std::endl << "\tThere is no such record!";
		}
		else if (selection == 3) {
			break;
		}
		//recordFile.seekg(0, ios::beg);
		recordFile.close();
	}
	
}