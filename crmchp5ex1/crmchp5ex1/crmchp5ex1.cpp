// crmchp5ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int intDefaultStart = 11;
	int intCounter = intDefaultStart;
	int intLimit = 10;

	while (intCounter <= intLimit) {
		cout << "While:" << intCounter << endl;
		intCounter++;
	}

	intCounter = intDefaultStart;

	do {
		cout << "Do While:" << intCounter << endl;
		intCounter++;
	} while (intCounter <= intLimit);

    return 0;
}

