#include<iostream>
#include "heading.h"
#define _CRTDBG_MAP_ALLOC

//Record recordedTransaction;

int main() {
	showMenu();
	int selection;
	while (std::cin >> selection) {
		if (selection == 1) {
			readRecord();
		}
		else if (selection == 2) {
			searchRecord();
		}
		else if (selection == 3) {
			showAllRecords();
		}
		else if (selection == 4) {
			break;
		}
		showMenu();
	}
	_CrtDumpMemoryLeaks();
}