#include <iostream>;

using namespace std;


int main() {

	float PI = 3.1459265;

	printf("Precision specification is %.*f\n", 1 , PI);
	printf("Precision specification is %.*f\n", 2, PI);
	printf("Precision specification is %.*f\n", 3, PI);

	float x = 7.0, y = 9.0;

	printf("The float division is %.3f  +  %.3f = %.3f  \n", x, y , x/y);

	double d = 12.45;

	printf("The double value is %.3f    \n",d);

}