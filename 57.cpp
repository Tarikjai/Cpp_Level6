#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void LoadDataFromVectorToFile(string FileName, vector <string> vFileContent) {
 
	fstream MyFile;

	MyFile.open(FileName, ios::in);



	if (MyFile.is_open()) {
		string line;

		while (getline(MyFile, line)) {

			//cout << line << endl;

			string 



		}
		MyFile.close();


	}


}



int main() {
	vector <string> vFileContent;
 
	LoadDataFromVectorToFile("text.txt", vFileContent);

}