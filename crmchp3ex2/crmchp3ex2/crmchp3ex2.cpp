// crmchp3ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ofstream fileVCard;

	fileVCard.open("name.vcf");
	fileVCard << "BEGIN:VCARD" << endl;
	fileVCard << "N:MacDougald;Chris;;" << endl;
	fileVCard << "FN: Chris MacDougald" << endl;
	fileVCard << "EMAIL: crmacd@gmail.com" << endl;
	fileVCard << "TEL;CELL;VOICE:(210) 316 2396" << endl;
	fileVCard << "END:VCARD" << endl;

	fileVCard.close();
    return 0;
}

