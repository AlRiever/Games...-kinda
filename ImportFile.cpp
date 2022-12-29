#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
	std::fstream file;
	std::vector <std::string> _levelData;  //creating a verctor string
	std::string TestFileName = "TestLevel.txt";  // creating a string variable with the (.txt) file's name
	file.open(TestFileName);
	if (file.fail()) {  //if failed to open the (.txt) file, program terminates immediately
		perror(TestFileName.c_str());
		exit(1);
		system("PAUSE");
	}
	std::string line;  //line variable is empty
	while (getline(file, line)) {  //scans every row in a string array
		_levelData.push_back(line);  //nothing is inserted in the vector since line variable is empty
	}
	file.close();

	for (auto x : _levelData) {  //running a for loop to print out the (.txt) file
		std::cout << x << "\n";
	}
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

/*This is an overall source code of how to import (.txt) files in a cpp program
and do all the manipulations in it. 
This program was made for my own learnming purposes, 
You are always welcomed to use my codes if you ever find them useful.*/
