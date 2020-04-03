#include <iostream>
#include "g2.h"
#include "g2use.h"
#include <string>
#include <fstream>

void greeting() {
	std::cout << "Maksym Oshiyko, K- 14, Var - 46\n"
			  << "46. Визначити, чи дві прямі, задані парами точок, є паралельними "
			  << "збігаються або перетинаються (тоді визначити точку їх перетину).\n ";
}



std::string getInputFile() {
	std::string str;
	std::cout << "Enter path to input file: ";
	std::cin >> std::noskipws >> str;
	if (str == "\n") {
		str = "D :\\\\C++\\\\laboratoryworks\\Lab5\\in.txt";
	}
	return str;
}

std::string getOutputFile() {
	std::string str;
	std::cout << "Enter path to output file: ";
	std::cin >> std::noskipws >> str;
	if (str == "\n") {
		str = "D:\\C++\\laboratory works\\Lab5\\out.txt";
	}
	return str;
}


int main() {
	std::setlocale(LC_ALL, " ");
	greeting();
	std::ifstream input("D :\\C++\\laboratory works\\Lab5\\in.txt");
	if(!input){
		std::cout << "File is not opened.";
		return 0;
	}
	std::ofstream output(getOutputFile());


}