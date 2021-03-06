#include <iostream>
#include <fstream>
#define str std::string

str replace(str s1, str s2, str myStr) {
	size_t i;
	while ((i = myStr.find(s1)) != str::npos) {
		myStr = myStr.substr(0, i) + s2 + myStr.substr(i + s1.length(), -1);
	}
	return myStr;
}

int main(int ac, char **av) {
	// error checking:
	if (ac != 4) {
		std::cout << "no enough args" << std::endl;
		std::cout << "./replace <fileName> <s1:to be replaced> <s2:to replace with>" << std::endl; 
		return 0;
	}

	// open input file:
	str file(av[1]);
	std::ifstream myFile(file);
	if (!myFile) {
		std::cerr << "can't open " << file << std::endl;
		return 1;
	}

	// read from file into myStr:
	str	myStr;
	if (myFile.is_open() && myFile.good()) {
		std::getline(myFile, myStr, '\0');
	}

	// search and replace 
	myStr = replace(str(av[2]), str(av[3]), myStr);
	
	// write myStr to file...
	std::ofstream outFile(file + ".replace");
	if (!outFile) {
		std::cerr << "can't open/create" << file + ".replace" << std::endl;
		return 1;
	}
	outFile << myStr;

	// close files:
	myFile.close();
	outFile.close();
}