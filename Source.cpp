#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
#include <vector>

using namespace std;


void fillRandomMatrix(int Matrix[3][3], int row, int cols) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1,10);
		}
	}
}

void PrintRandomMatrix(int Matrix[3][3], int row, int cols) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++) {
			cout << setw(3) << Matrix[i][j] << "    ";
		}
		cout << endl;
	}
	cout << endl;
}

int SumRows(int Matrix[3][3], int row, int cols) {
	int counter = 0;

		for (int i = 0; i < cols; i++) {
			counter += Matrix[row][i];
		}
		
		return counter;
	
}


void fillSumArr(int ArrSum[3], int Matrix[3][3], int row, int cols) {
	for (int i = 0; i < row; i++) {

		ArrSum[i] = SumRows(Matrix, i, cols)  ;


	}
}

void PrintSum(int ArrSum[3], int row, int cols) {
	for (int i = 0; i < row; i++) {

	  cout << "Sum " << i+1 <<" row: " << ArrSum[i] << endl;
	 
	
	}
	
	
}



int main() {

	int Matrix[3][3];
	int ArrSum[3];

	fillRandomMatrix(Matrix,3, 3);
	cout << "The following is a 3x3 random matrix: " << endl;
	PrintRandomMatrix(Matrix,3, 3);
	
	fillSumArr(ArrSum, Matrix, 3, 3);

	cout << "The following are the sum of each row in the matrix:" << endl; 
	PrintSum(ArrSum, 3, 3);
}