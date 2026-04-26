#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void Generate3X3Matrix(int arr[3][3], int Rows, int Cols) {

	short counter = 0;

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {
			counter++;
			arr[i][j] = counter;
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

int main() {
 
	int arr[3][3];

	Generate3X3Matrix(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

}