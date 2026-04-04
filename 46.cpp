#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vVector = { 1,5,6,9,7 };

	cout << "Usine range loop: ";
	for (int x : vVector) {
		cout << x << " ";
	}

	cout << endl;

	cout << "\nUsing vVector.at(): " << endl;
	cout << "Element 1 is: " << vVector.at(0) << endl;
	cout << "Element 2 is: " << vVector.at(1) << endl;
	cout << "Element 3 is: " << vVector.at(2) << endl;
	cout << "Element 4 is: " << vVector.at(3) << endl;


	cout << endl;
	cout << "\nUsing vVector.[]: " << endl;
	cout << "Element 1 is: " << vVector[0] << endl;
	cout << "Element 2 is: " << vVector[1] << endl;
	cout << "Element 3 is: " << vVector[2] << endl;
	cout << "Element 4 is: " << vVector[3] << endl;

}