#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillMatrixWithRandomNumbers(int Arr[3][3], int Rows, int Cols) {
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			Arr[i][j] = MyLib::RandomNumber(1, 11);
		}
	}
}
void Print3x3Matrix(int Arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, Arr[i][j]);
		}
		cout << endl;
	}

}



int CountNumberInMatrix(int Matrix1[3][3], int Rows, int Cols, int CountNumber) {

	int counter = 0;

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {

			if (Matrix1[i][j] == CountNumber) {
				counter++;
			}

		}
	}

	return counter;
}





int main() {
	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);

	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix1, 3, 3);

	int CountNumber = MyLib::AskNumber("\nEnter the number to count in matrix? ");

	cout << "Number " << CountNumber << " count in matrix is: " << CountNumberInMatrix(Matrix1, 3, 3, CountNumber);



	system("pause>0");
}
