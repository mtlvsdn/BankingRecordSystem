#include "heading.h"
#include <iostream>
#include <Windows.h>

void showMenu() {
	std::system("cls");
	std::system("color 60");
	std::cout << std::endl << "\t\t\t\t\tBanking Record System v1.0";
	std::cout << std::endl << std::endl << "\t1. Add New Record";
	std::cout << std::endl << "\t2. Search Record";
	std::cout << std::endl << "\t3. See All Records";
	std::cout << std::endl << "\t4. Quit";
	std::cout << std::endl << std::endl;
	std::cout << "Select --> ";
	std::system("pause>0");
}
