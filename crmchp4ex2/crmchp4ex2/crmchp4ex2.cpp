// crmchp4ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int intGrade = 90;

	cout << "Please enter a integer grade value (0-100): ";
	cin >> intGrade;

	cout << "If: ";
	if (intGrade > 89) {
		cout << "A";
	}
	else if (intGrade > 79) {
		cout << "B";
	}
	else if (intGrade > 69) {
		cout << "C";
	}
	else if (intGrade > 59) {
		cout << "D";
	}
	else {
		cout << "F";
	}
	cout << endl;

	cout << (intGrade > 69 ? "Pass" : "Fail") << endl;

	//cout << (intGrade > 89 ? "A" : (intGrade > 79 ? "B" : (intGrade > 69 ? "C" : (intGrade > 59 ? "D" : "F")))) << endl;
	cout << "Switch: ";
	switch (intGrade / 10) {
		case 9: case 10:
			cout << "A" << endl;
			break;
		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		default:
			cout << "F" << endl;
	}

    return 0;
}

