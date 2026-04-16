#include <iostream>
using namespace std;

int calculate(int a, int b, int c = 0, int d = 0) {
	return  (a + b + c + d);
}


int main()
{
	cout << calculate(5, 5) << endl;
	cout << calculate(5, 5, 5) << endl;
	cout << calculate(5, 5, 5, 5) << endl;

}


