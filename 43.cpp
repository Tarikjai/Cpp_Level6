#include <iostream>
using namespace std;
#include <vector>


int main() {

	int* ptrX;
	float* ptrY;

	ptrX = new int;
	ptrY = new float;

	*ptrX = 5;
	*ptrY = 12.5;


	cout << *ptrX << endl;

	cout << *ptrY << endl;

	delete ptrX;
	delete ptrY;
}