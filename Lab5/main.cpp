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

int processData(std::ifstream& input, std::ofstream& output) {
	while (!input.eof()) {
		double arr[8];
		for (int i = 0; i < 8; ++i) {
			input >> arr[i];
		}
		Point p1(arr[0], arr[1]), p2(arr[2], arr[3]);
		Point p3(arr[4], arr[5]), p4(arr[6], arr[7]);

		Line a(p1, p2);
		Line b(p3, p4);
		try {
			if (p1 == p2) {
				throw p1;
			}
			if (p3 == p4) {
				throw p3;
			}
		} catch (Point a) {
			output << "Exception: equal points - " << a.toStr() << "\n";
			continue;
		}
		if (isEqual(a, b)) {
			output << a.toStr() << "  " << b.toStr() << " - збігаються\n";
		} else if (isParallel(a, b)) {
			output << a.toStr() << "  " << b.toStr() << " - паралельні\n";
		} else {
			output << a.toStr() << "  " << b.toStr() << " - перетинаються\n";
		}
	}
}

int main() {
	std::setlocale(LC_ALL, " ");
	greeting();
	std::ifstream input;
	std::ofstream output;
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
	processData(input, output);

	return 0;
}




