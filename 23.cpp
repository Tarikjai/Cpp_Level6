#include <iostream>;

using namespace std;


int main() {

	int page, totalpages;

	page = 1, totalpages = 10;
	printf("The number of page is %d\n", page);
	printf("The number of page is %d from %d\n", page, totalpages);

	printf("The number of page is %0*d \n", 1, page);
	printf("The number of page is %0*d \n", 2, page);
	printf("The number of page is %0*d \n", 3, page);


	int number1 = 20, number2 = 30;
	printf("The result of %d + %d is %d\n", number1, number2, number1 + number2);

}