#include <iostream>
#include "g2.h"
#include "g2use.h"
#include <string>
#include <fstream>

void greeting() {
	std::cout << "Maksym Oshiyko, K- 14, Var - 46\n"
			  << "46. Визначити, чи дві прямі, задані парами точок, є паралельними "
			  << "збігаються або перетинаються (тоді визначити точку їх перетину).\n";
}

std::string getInputFile() {
	std::string str;
	std::cout << "Enter path to input file: ";
	std::getline(std::cin >> std::noskipws, str);
	if (str == "") {
		str = "D:\\C++\\laboratory works\\Lab5\\in.txt";
	}
	return str;
}

std::string getOutputFile() {
	std::string str;
	std::cout << "Enter path to output file: ";
	std::getline(std::cin >> std::noskipws, str);
	if (str == "") {
		str = "D:\\C++\\laboratory works\\Lab5\\out.txt";
	}
	return str;
}

bool processData(std::ifstream& input, std::ofstream& output){
	double num;
	input >> num;
}

int main() {
	std::setlocale(LC_ALL, " ");
	greeting();
	std::ifstream input;
	std::ofstream output;
	double num;
	while (true) {
		input.open(getInputFile());
		if (input.is_open()) {
			std::cout << "Input file is opened.\n";
			break;
		} else {
			std::cout << "Not found.\n";
		}

	}
	while (true) {
		output.open(getOutputFile());
		if (output.is_open()) {
			std::cout << "Output file is opened.\n";
			break;
		} else {
			std::cout << "Not found.\n";
		}
	}

	input >> num;
	output << num;
}




