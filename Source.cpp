#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
#include <vector>

using namespace std;

int CountString(string S1) {
	//cout << "Your String words are : " << endl;
	cout << endl;

	string delim = " ";
	short pos = 0;
	string sWord;
	short count = 0;

	while ((pos = S1.find(delim)) != std::string::npos) {

		sWord = S1.substr(0, pos);
		if (sWord != "") {
			count++;
			//	cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "") {
		count++;
		// cout << s1 << endl;
	}
	return count;
}

string SplitFunction(string S1, vector<string>& Words) {

	string delim = " ";
	short pos = 0;
	string sWord;
	short count = 0;

	while ((pos = S1.find(delim)) != std::string::npos) {

		sWord = S1.substr(0, pos);
		if (sWord != "") {
			Words.push_back(sWord);
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "") {
		Words.push_back(S1);
	}
	return sWord;
}

void PrintVector(string Words) {

	for (int i : Words) {
		cout << i << endl;
	}

}


int main() {

	std::vector<string> Words;

	string   S1 = "Mohammed Abu-Hadhoud @ProgrammingAdvices";/* MyLib::AskString("Please  Enter a String?\n");*/
	//	cout << "Your String words are : " << endl; 
	cout << "Tokens = " << CountString(S1);
	cout << endl;

	PrintVector(SplitFunction(S1, Words) );
}