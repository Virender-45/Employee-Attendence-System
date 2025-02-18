#include<iostream>
#include"company.h"

using namespace std;

Company::Company()
{
	empHave[0] = {45, "Virender", "Singh"};
	empHave[1] = {20, "Atul", "Rana"};
	empHave[2] = {26, "Nikhil", "Rana"};
	empHave[3] = {32, "Sahil", "Dhiman"};
	totalEmp = 4;
}

void Company::displayMenu()
{
	cout << "--------Welcome to Office Register--------" << endl;
	cout << "(1) Add Employee." << endl;
	cout << "(2) Display Employees Details with ID." << endl;
	cout << "(3) Mark Attendence of Employees" << endl;
	cout << "(4) Close the Register." << endl;
	cout << "Enter your choice : " << endl;
}

void Company::addEmployee() 
{
	int n;

	cout << "Enter the number of employees you want to add : ";
	cin >> n;
	
	for (int i = 0;i < n;i++) {
		cout << "Enter the details of employee " << i + 1 << " :" << endl;
		cout << "Enter ID : ";
		cin >> empHave[i].id;
		cout << "Enter First name : ";
		cin >> empHave[i].fname;
		cout << "Enter Last name : ";
		cin >> empHave[i].lname;
		totalEmp++;
		cout << "Employee with ID " << empHave[i].id << " added." << endl;
	}
}

void Company::displayEmployees() {
	int id;
	cout << "Enter the ID of the employee : ";
	cin >> id;

	bool found = false;
	for (int i = 0;i < totalEmp;i++) {
		if (id == empHave[i].id) {
			found = true;
			cout << "Name : " << empHave[i].fname << " " << empHave[i].lname << endl;
		}
	}
	if (!found) {
		cout << "Employee Not Found" << endl;
	}
}
