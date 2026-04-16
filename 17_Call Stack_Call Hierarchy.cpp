#include <iostream>
using namespace std;
void koko()
{
	cout << "Hi I'm function4 " << endl;
}
void Function3()
{
	koko();
}
void Function2()
{
	Function3();
}
void Function1()
{
	Function2();
}
int main() {
	Function1();
	return 0;
}