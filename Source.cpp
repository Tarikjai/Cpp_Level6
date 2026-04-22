#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void FillArrayWithRadom3X3(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 9);
		}
	}
}
 
void printRadom3X3(int arr[3][3], int Rows, int j) {

	cout << "\nThe following is a 3x3 random matrix:\n";

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}



int SumCols(int arr[3][3], int Rows, int j) {
	
	int sum = 0;

		for (int i = 0; i < Rows; i++) {

			sum += arr[i][j];
		
	}
	return sum;


}


void PrintSumCols(int arr[3][3], int Rows, int Cols) {

	cout << "\nThe following are the sum of each col in the matrix: \n";
	for (int j = 0; j<= Cols-1;j++) {

		cout << "Col " << j + 1 << " Sum = " << SumCols(arr, Rows, j) << endl;
	}
	
}




int main() {

	int arr[3][3];

	FillArrayWithRadom3X3(arr, 3, 3);

	printRadom3X3(arr, 3, 3);

	PrintSumCols(arr, 3, 3);

}