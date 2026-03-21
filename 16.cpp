#include <iostream>
using namespace std;

int MySum(int a, int b, int c, int d) {
	return  (a + b + c + d);
}

int MySum(int a, int b, int c) {
	return  (a + b + c);
}


int MySum(int a, int b) {
	return  (a + b);
}

double MySum(double a, double b, double  c) {
	return  (a + b + c);
}


int main()
{
	cout << MySum(5, 5) << endl;
	cout << MySum(5, 5, 5) << endl;

	cout << MySum(10.2, 5.4, 5.2) << endl;
}


