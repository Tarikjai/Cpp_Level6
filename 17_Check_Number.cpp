#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;


void Print3x3Matrix(int Arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			//cout << setw(3) << arr[i][j] << "  ";
			printf(" %0*d   ", 2, Arr[i][j]);
		}
		cout << endl;
	}

}



int CheckNumberPresence(int Matrix1[3][3], int Rows, int Cols) {


	int NumberToCheck = MyLib::AskNumber("\nPlease Enter the number to look for in matrix: ");

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {

			if (Matrix1[i][j] == NumberToCheck) {
				return true;
			}

		}
	}
	return false;
}








int main() {

	int Matrix1[3][3] = { {25,4,5}, {8,1,4}, {50,75,8} };


	cout << "Matrix1: " << endl;
	Print3x3Matrix(Matrix1, 3, 3);


	if (CheckNumberPresence(Matrix1, 3, 3)) {
		cout << "\nYes, It is there";
	}
	else {
		cout << "\nNo, It's NOT present";
	}



	system("pause>0");
}
