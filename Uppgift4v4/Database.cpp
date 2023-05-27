#include "Database.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

void Database::read_files() {
	
	string name;
	cout << "Enter the name of the file to read: ";
	cin >> name;
	while (name != "0") {
	string line;
	ifstream MyReadFile(name);
	Birdlist bl;
	Birdfile bf;
	// Use a while loop together with the getline() function to read the file line by line
	while (getline(MyReadFile, line)) {
		Bird b;
		
		stringstream ss(line);
		
		getline(ss, b.name, ',');
		ss >> b.number;
		bl.addbird(b);	
	}
	// Close the file
	bf.addbirdfile(bl);
	files.push_back(bf);
	MyReadFile.close();

	cout << "Enter the name of the file to read (or 0 to exit): ";
	cin >> name;
}
}

void Database::show_files() {
	Birdfile b= files[0];
	cout << b.birdfilev.at(20).birdlistv.at(20).name;
	

}

