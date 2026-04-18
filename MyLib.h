#pragma once
#include <iostream>


using namespace std;

namespace MyLib
{
		
	int RandomNumber(int From, int To) {
		int RandomNumber = rand() % (To - From + 1) + From;                // génère un entier pseudo-aléatoire
		return RandomNumber;
	}
}