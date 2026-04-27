#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int arr1[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr1[i][j] = MyLib::RandomNumber(1, 11);
		}
	}
}


void Print3x3Matrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, arr[i][j]);
		}
		cout << endl;
	}

}


void PrintMiddleRowMatrix(int arr[3][3], int Rows, int Cols) {

	short MiddleRow = Rows / 2;
		for (int j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, arr[MiddleRow][j]);
		}
		cout << endl;
	

}

void PrintMiddleColMatrix(int arr[3][3], int Rows, int Cols) {

	short MiddleCols = Cols / 2;
	 
		for (int j = 0; j < Rows; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, arr[j][MiddleCols]);
		}
		
	

}


int main() {

	int arr1[3][3];

	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "Matrix1: " << endl;
	Print3x3Matrix(arr1, 3, 3);


	cout << "\nMiddle Row of Matrix1: \n";
	PrintMiddleRowMatrix(arr1, 3, 3);

	cout << "\nMiddle Columns of Matrix1: \n";
	PrintMiddleColMatrix(arr1, 3, 3);

}
