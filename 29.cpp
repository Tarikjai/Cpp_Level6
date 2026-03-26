#include <iostream>;
#include <vector>;

using namespace std;

void ReadNumber(vector <int>& vNumber) {

	int Number;
	 
	cout << "Please enter a number: ";
	cin >> Number;
	cout <<  endl;

	vNumber.push_back(Number);
	
}


void printNumber(vector <int>& vNumber) {
	cout << "\nAll vectors element : "; 
	for (int& number : vNumber) {
		cout << number << ", ";
	}
	cout << endl;

}

int main() {
	string Play = "Y";
	vector <int> vNumber;

	do {
		ReadNumber(vNumber);

		cout << "Would you like to add a new Number (Y/N)? ";
		cin >> Play;
	} while (Play == "Y" || Play == "y");

	printNumber(vNumber);
	 
}
 