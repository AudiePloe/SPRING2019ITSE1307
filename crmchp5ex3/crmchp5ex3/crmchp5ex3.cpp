// crmchp5ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string getHiddenWord(string strOriginalWord) {
	string strHiddenWord = "";
	for (unsigned int intCharacters = 0;
		intCharacters < strOriginalWord.length();
		intCharacters++) {
		strHiddenWord += "#";
		//cerr << "loop for building hidden word: " << strHiddenWord << endl;
	};
	return strHiddenWord;
}

int main()
{
	string strWord = "Hangman";
	string strHiddenWord = "";
	bool boolFound = false;
	int intTries = 0;
	char chrGuess = '0';

	cout << endl << "Please enter a word: ";
	cin >> strWord;

	strHiddenWord = getHiddenWord(strWord);

	intTries = strWord.length();

	do {
		cout << "Your word is: " << strHiddenWord << endl;
		cout << "Please guess a letter in the word: ";
		cin >> chrGuess;

		boolFound = false;

		for (int intScanChar = 0;
			intScanChar < strWord.length();
			intScanChar++) {
			//Loop through looking at each character in the word
			if (strWord.at(intScanChar) == chrGuess) {
				//if you find the guess at this character then replace it in the hidden string
				boolFound = true;
				char chrTemp = strWord.at(intScanChar);
				//str.replace(str.begin() + 12, str.end() - 4, 4, 'o');
				strHiddenWord.replace(
					strHiddenWord.begin() + intScanChar,
					strHiddenWord.begin() + intScanChar + 1,
					1,
					chrTemp);
				//cerr << "string replace: " << strHiddenWord << endl;
			}
		}

		if (!boolFound) {
			intTries--;
			cout << "NOPE! '" << chrGuess << "' is not in the word! You have " << intTries << " tries left." << endl;
			continue; //Goto label 'continue'
		}

		if (strHiddenWord.find('#') == string::npos) {
			cout << "Congrats you have uncovered the word: " << strWord << endl;
			break; //Stops the while loop here!
		}
		//label: continue
	} while (intTries > 0);
	
	return 0;
}



