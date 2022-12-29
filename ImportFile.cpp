#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
	std::fstream file;
	std::vector <std::string> _levelData;
	std::string TestFileName = "TestLevel.txt";
	file.open(TestFileName);
	if (file.fail()) {
		perror(TestFileName.c_str());
		exit(1);
		system("PAUSE");
	}
	std::string line;
	while (getline(file, line)) {
		_levelData.push_back(line);
	}
	file.close();

	for (auto x : _levelData) {
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
