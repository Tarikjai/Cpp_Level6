#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;

void Generate3X3Matrix(int arr[3][3], int Rows, int Cols) {

	int sum = 1;
	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {

			arr[i][j] += sum; 
		}
		
	}
}

void PrintMatrix(int arr[3][3], int Rows, int Cols) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Rows; j++) {

			cout << setw(3) << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
 
	int arr[3][3];

	Generate3X3Matrix(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

}