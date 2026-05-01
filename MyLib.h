#pragma once
#include <iostream>


using namespace std;

namespace MyLib
{
		
	int RandomNumber(int From, int To) {
		int RandomNumber = rand() % (To - From + 1) + From;                // génère un entier pseudo-aléatoire
		return RandomNumber;
	}


	int AskNumber(string Message) {
		int number = 0;
		do {
			cout << Message;
			cin >> number;
		} while (number < 0);

		return number;
	}

}