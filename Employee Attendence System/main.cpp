#include<iostream>
#include"company.h"

using namespace std;

int main() {
	int choice;
	
	Company wowz;
	do {
		wowz.displayMenu();
		cin >> choice;
		switch (choice) {
		case 1:
			wowz.addEmployee();
			break;
		default:
			cout << "Invaild Input." << endl;
			break;
		}
	} while (choice != 4);

	return 0;
}