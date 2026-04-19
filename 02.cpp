#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;


void GenerateRandomNumber(int arr[3][3], int Rows, int Column) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Column; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 102);
		}

	}

}
void PrintRandomNumber(int arr[3][3], int Rows, int Column) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Column; j++) {
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;

	}

}

void PrintSumRows(int arr[3][3], int Rows, int Column) {
	  
	for (int i = 0; i < Rows; i++) {
		int sum = 0;
		for (int j = 0; j < Column; j++) {
			 sum+= arr[i][j] ;
		}
		cout << " Row " << i + 1 << " Sum = " << sum ;
		cout << endl;

	}

}


int main() {

	int arr[3][3];


	GenerateRandomNumber(arr, 3, 3);
	cout << "\n The following is a random matrix:\n";
	PrintRandomNumber(arr, 3, 3);

	cout << "The following are the sum for each row in the matrix:\n";
	PrintSumRows(arr, 3, 3);

}