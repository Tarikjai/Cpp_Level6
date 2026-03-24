#include <iostream>;
#include <vector>
using namespace std;

int main() {


	vector<int> Number = { 0,1,2,7,8 };

	cout << Number[4] << endl;

	cout <<  Number.size() << endl;
	
	Number.push_back(9) ;


	cout << Number[5] << endl;

	cout << Number.size();
	cout << endl;

	for (int i = 0; i < Number.size(); i++) {
		cout << Number[i];
	}
	cout << endl;




	for (int i : Number) {
		cout << i;
	}

}