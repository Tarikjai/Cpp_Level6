#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
 

void LoadFileFromFileToVector(string vFileContent, vector <string>& vVectorContent) {

	fstream MyFile;

	MyFile.open(vFileContent, ios::in);
	string line;

	while (getline(MyFile, line)) {
	
	  vVectorContent.push_back(line);
	}

}

void SaveVectorToFile();

void DeleteRecordFromFile(string FileContent, string Record) {
	vector <string> vVectorContent;

	LoadFileFromFileToVector(FileContent, vVectorContent);
	cout << "\nVector before " << endl;
	for (string& line : vVectorContent) {
		if (line == Record){
			vVectorContent.push_back
	}

}

void PrintFileContent(string FileContent) {

	fstream MyFile;

	MyFile.open(FileContent, ios::in);

	if (MyFile.is_open()) {

		string Line;

		while (getline(MyFile, Line)) {

			cout << Line << endl;
		}
		MyFile.close();
	}
}



int main() {
	cout << "File content before edit: " << endl;
	PrintFileContent("text.txt");


	DeleteRecordFromFile("text.txt","Ali");


	cout << "\n\nFile content after edit: " << endl;
	PrintFileContent("text.txt");
	
}