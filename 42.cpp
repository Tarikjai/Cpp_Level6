
#include <iostream>
using namespace std;
#include <vector>


int main() {
	void* ptr;
	
	int x = 10;

	ptr = &x;
	cout << ptr << endl;
	cout << *(static_cast<int*>(ptr)) << endl;

	float y = 5.2;
	
	ptr = &y;

	cout << ptr << endl;
	cout << *(static_cast<float*>(ptr)) << endl;




}