#include "Header.h"
#include <iostream>
#include <ctime>

void printArr(int* arr,int  &N) {

	for (int i = 0; i < N; ++i) {
		std::cout << *(arr + i) << " ";
	}
	std::cout << "\n";
}

void arrFromKeyboard(int* arr, int& N) {

	for (int i = 0; i < N; ++i) {
		std::cin >> *(arr + i);
	}
	std::cout << "Массив заполнен.";
}

void arrRand(int* arr, int& N) {

	srand(time(NULL));
	for (int i = 0; i < N; ++i) {
		*(arr + i) = rand() % 100;
	}
	std::cout << "\nМассив заполнен.\n";
}

void arrLength(int* arr, int& N) {

	int length;
	std::cout << "Введите N: ";
	std::cin >> length;
	N = length;
	std::cout << "\nMEMORY ALLOC: LENGTH: " << N << " BYTES: " << sizeof(arr) * N << "\n";
}

void addElement(int* arr, int& N) {

	int k, num, isPrime;
	for (int i = 0; i < N; ++i) {
		isPrime = false;
		for (int j = 2; j < *(arr + i); ++j) {
			num = *(arr + i);
			if (num % j == 0 && num != 2) {
				isPrime = false;
				break;
			} else isPrime = true;
		}
		if (isPrime) {
			k = i;
			break;
		}
	}

	N++;
	if (isPrime == false) {
		*(arr + N - 1) = 100;
	} else {
		for (int i = 1; i + 1 != N - k; ++i) {
			*(arr + N - i) = *(arr + N - i - 1);
		}
		*(arr + k + 1) = 100;
	}

	std::cout << "\nЭлемент добавлен.\n";
}

