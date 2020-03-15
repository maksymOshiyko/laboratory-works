#include <iostream>
#include "Header.h"


void sayHello();
bool showMenuOne(int*, int&);
bool showMenuTwo(int*, int&);

int main() {

	setlocale(LC_ALL, "Russian");

	int N = 12;
	int* arr = new int[N];
	sayHello();
	while (showMenuOne(arr, N)) {


	}

	delete[] arr;
	std::cout << "ARRAY DELETED SUCCESSFULLY\n";
	std::cout << "����� ���������.";

	return 0;
}


void sayHello() {

	std::cout << "Hi,my name is Maksym Oshyiko\n";
}

bool showMenuOne(int* arr, int& N) {

	char num;

	std::cout << "N = " << N << "\n";
	std::cout << "������� \"1\" ����� ��������� ������ � ����������\n"
		<< "������� \"2\" ����� ��������� ������ � ���������������� �������\n"
		<< "������� \"3\" ������� N\n"
		<< "������� ����� ������ ������� ��� ������\n";
	std::cin >> num;
	if (num == '1') {
		arrFromKeyboard(arr, N);
		if (!showMenuTwo(arr, N))
			return false;
	} else if (num == '2') {
		arrRand(arr, N);
		printArr(arr, N);
		if (!showMenuTwo(arr, N))
			return false;
	} else if (num == '3') arrLength(arr, N);
	else return false;

	return true;
}


bool showMenuTwo(int* arr, int& N) {

	char num;

	std::cout << "������� \"1\" ��� ���������� �������� ����� ������� ��������,�������� �������� �� �������� �������\n"
		<< "������� \"2\" ��� ���������� �� �����������(QuickSort)\n"
		<< "������� \"Q\" ��� ������ �� ���������\n";
	std::cin >> num;
	if (num == '1') {
		addElement(arr, N);
	} else if (num == '2') {
		quickSort(arr, 0, N - 1);

	} else return false;

	printArr(arr, N);

	return true;
}

