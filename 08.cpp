#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void Generate3x3Matrix(int arr1[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			arr1[i][j] = MyLib::RandomNumber(1, 10);
		}
	}

}
 
void Print3x3Matrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << "  ";
		}
		cout << endl;
	}

}


int main() {

	int arr1[3][3];
	int arr2[3][3];
	Generate3x3Matrix(arr1, 3, 3);
	Generate3x3Matrix(arr2, 3, 3);

	cout << "Matrix1: " << endl;
	Print3x3Matrix(arr1, 3, 3);
	cout << "\nMatrix1: " << endl;
	Print3x3Matrix(arr2, 3, 3);
}