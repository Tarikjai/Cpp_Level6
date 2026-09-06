#include <iostream>
#include <iomanip>
#include "MyLib.h"
#include <cctype>
#include <vector>

using namespace std;


void fillRandomMatrix(int Matrix[3][3], int row, int cols) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < cols; j++) {
			Matrix[i][j] = MyLib::RandomNumber(1,100);
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


void PrintSum(int Matrix[3][3], int row, int cols) {
	for (int i = 0; i < row; i++) {

	  cout << "Sum " << i+1 <<" row: " << SumRows(Matrix, i, cols) << endl;
	 
	
	}
	
	
}



int main() {

	int Matrix[3][3];

	fillRandomMatrix(Matrix,3, 3);
	cout << "The following is a 3x3 random matrix: " << endl;
	PrintRandomMatrix(Matrix,3, 3);
	
	cout << "The following are the sum of each row in the matrix:" << endl; 
	PrintSum(Matrix, 3, 3);
}