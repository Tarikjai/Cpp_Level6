#include <iostream>
#include <iomanip>
#include "MyLib.h"

using namespace std;





int main() {

	int arr[3][3],

		GenerateArray();



	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout <<   setw(5) <<MyLib::RandomNumber(1, 101) ;
		}

		cout << endl;
	} 


		
}