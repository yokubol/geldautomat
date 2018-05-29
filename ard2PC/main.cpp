/* This program will read input from Arduino 
We will compile this file into ard2PC
use this file with arduino sketch "sketch_may27a"*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream file;
	string str;
	file.open("/dev/ttyACM0");

	if(file.is_open()) {
		file >> str;
		cout << str;
	}

	file.close();

	return 0;
}
