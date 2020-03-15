#include<iostream>
#include<fstream>
#include<string>
#include"header.h"
using namespace std;

int findExcep(string& str) {
	string exceptions = ":[],\"().";
	int i = 0, pos;
	while (i < exceptions.length()) {
		if (str.find(exceptions[i]) == std::string::npos) {
			++i;
			continue;
		} else {
			pos = str.find(exceptions[i]);
			return pos;
		}
	}
	
	return std::string::npos;
}

int length(string& str) {
	int pos, length = str.length();
	while (true) {
		pos = findExcep(str);
		if (pos == std::string::npos) {
			return length;
		} else {
			str.erase(pos, 1);
			--length;
		}
	}
}

int main() {
	ifstream fi("source.txt");
	ofstream fo("dest.txt");
	string str, longStr;
	int size = 0, trueLength, counter = 0;
	char lastChar;
	bool isDot = false;

	while (!fi.eof()) {
		while (fi >> str) {
			lastChar = str[str.length() - 1];
			trueLength = length(str);
			if (size < trueLength) {
				size = trueLength;
				longStr = str;
			}

			if (lastChar == '.') {
				isDot = true;
				fo << longStr << ". ";
				size = 0;
				break;
			}
		}
	}

	if (isDot == false) {
		fi.close();
		fi.open("text.txt");
		while (!fi.eof()) {
			fi >> str;
			if (counter < 6) {
				fo << str << " ";
				++counter;
			} else {
				fo << ". \n";
				counter = 0;
			}
		}
	}
	return 0;
}