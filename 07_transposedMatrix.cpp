#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void Generate3X3Matrix(int arr[3][3], int Rows, int Cols) {

	short counter = 0;

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			counter++;
			arr[i][j] = counter;
		}

	}
}


void Generate3X3TransposedMatrix(int arr[3][3], int Rows, int Cols, int TransposedArr[3][3]) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			 
			TransposedArr[i][j] = arr[j][i];
		}
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	cout << "The following is a 3x3 ordered matrix: " << endl;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {

			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << endl;
	}
}


void PrinttransposedMatrix(int TransposedArr[3][3], int Rows, int Cols) {

	cout << "\nThe following is a transposed 3x3  matrix: " << endl;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {

			cout << setw(3) << TransposedArr[i][j] << "    ";
		}
		cout << endl;
	}
}

int main() {

	int arr[3][3];

	int TransposedArr[3][3];

	Generate3X3Matrix(arr, 3, 3);

	Generate3X3TransposedMatrix(arr, 3, 3, TransposedArr);

	PrintMatrix(arr, 3, 3);

	PrintMatrix(TransposedArr, 3, 3);
}