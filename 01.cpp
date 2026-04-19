#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;


void GenerateRandomNumber(int arr[3][3], int Rows, int Column) {

	for (int i = 0; i < Rows; i++) {
		for (int j = 0; j < Column; j++) {
			arr[i][j] = MyLib::RandomNumber(1, 100);
		}

	}

}


void PrintRandomNumber(int arr[3][3]) {

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;

	}

}

int main() {

	int arr[3][3];

	
	GenerateRandomNumber(arr,3,3);
	PrintRandomNumber(arr);
	
	//


		
}