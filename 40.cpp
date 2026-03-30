#include <iostream>
using namespace std;
 

int main()
{

	int arr[4] = { 10,20,30,40 };
	int *ptr = arr;
	ptr = arr;

	cout << "\nAdresse is : " << endl;
	cout << ptr << endl;
	cout << ptr +1 << endl;
	cout << ptr +2 << endl;
	cout << ptr +3 << endl;


	cout << "\nValue is : " << endl;
	cout << *ptr << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;

	cout << "\nwith For loops Value is : " << endl;
	for (int i = 0; i <= 3; i++) {
		cout << *(ptr +i) << endl;
	}
 

}