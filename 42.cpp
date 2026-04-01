
#include <iostream>
using namespace std;
#include <vector>


int main() {
	void* ptr;
	
	int x = 10;

	ptr = &x;

	cout << *(static_cast<int*>(ptr));

	float y = 5.2;
	
	ptr = &y;


	cout << *(static_cast<float*>(ptr));




}