#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 10);
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			printf("%0*d ", 2, arr[i][j]);
		}
		cout << endl;
	}
}


int main() {

	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3); 
}
