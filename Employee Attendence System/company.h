#pragma once

#include<iostream>
#include<string>

using namespace std;

class Company
{
public:
	struct Employee
	{
		int id;
		string fname;
		string lname;
	};
	Employee empHave[100];
	int totalEmp;
	Company();

	void displayMenu();
	void addEmployee();
	void displayEmployees();
	void markAttendence();
};
