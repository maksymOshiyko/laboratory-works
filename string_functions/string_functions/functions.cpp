#include "header.h"
using namespace std;

int strlen_(const char* str) {
	int i = 0, n = 0;
	while (str[i] != '\0') {
		++n;
		++i;
	}
	return n;
}

bool strcmp_(const char* str1, const char* str2) {
	int i = 0;
	while (str1[i] != '\0' || str2[i] != '\0') {
		if (str1[i] == str2[i]) {
			++i;
			continue;
		} else
			return false;
	}
	return true;
}

bool strncmp_(const char* str1, const char* str2, int n) {
	int i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n) {
		if (str1[i] == str2[i]) {
			++i;
			continue;
		} else
			return false;
	}
	return true;
}

const char* strchr_(const char* str, char ch) {
	int i = 0;
	while (str[i] != '\0') {
		if (str[i] == ch)
			return &str[i];
		++i;
	}
	return nullptr;
}

char* strcpy_(char* str1, const char* str2) {
	int i = 0;
	while (str2[i] != '\0') {
		str1[i] = str2[i];
		++i;
	}
	str1[i] = '\0';
	return str1;
}

char* strncpy_(char* str1, const char* str2, int n) {
	int i = 0;
	while (str2[i] != '\0' && i < n) {
		str1[i] = str2[i];
		++i;
	}
	str1[i] = '\0';
	return str1;
}

char* strcat_(char* str1, const char* str2) {
	int i = 0, j = 0;
	while (str1[i] != '\0')
		++i;
	while (str2[j] != '\0') {
		str1[i] = str2[j];
		++i;
		++j;
	}
	str1[i] = '\0';

	return str1;
}

char* strncat_(char* str1, const char* str2, int n) {
	int i = 0, j = 0;
	while (str1[i] != '\0')
		++i;
	while (str2[j] != '\0' && j < n) {
		str1[i] = str2[j];
		++i;
		++j;
	}
	str1[i] = '\0';

	return str1;
}

const char* strstr_(const char* str1, const char* str2) {
	int i = 0, j = 0;
	const char* k;
	bool check = false;
	while (str1[i] != '\0') {
		if (str1[i] == str2[j]) {
			k = &str1[i];
			while (str1[i] == str2[j] && str2[j] != '\0') {
				++i;
				++j;
				if (str2[j] == '\0')
					check = true;
				else check = false;
			}
			if (check) return k;

		} else {
			++i;
		}
	}
	return nullptr;
}

const char* strpbrk_(const char* str1, const char* str2) {
	int i = 0, j = 0;
	const char* ch;
	while (str1[i] != '\0') {
		if (str1[i] == str2[j]) {
			ch = &str1[i];
			return ch;
		}
		++i;
	}
	return nullptr;
}


int strspn_(const char* str1, const char* str2) {
	int n = 0;
	for (int i = 0; str2[i] != '\0'; ++i) {
		for (int j = 0; str1[j] != '\0'; ++j) {
			if (str1[i] == str2[j])
				++n;
			else continue;
		}
	}
	return n;
}

int strcspn_(const char* str1, const char* str2) {
	int n = 0;
	for (int i = 0; str2[i] != '\0'; ++i) {
		n = 0;
		for (int j = 0; str1[j] != '\0'; ++j) {
			if (str1[j] == str2[i])
				return n;
			else n++;
		}
	}
	return n;
}

int find_last_of(const char* str1, unsigned int pos, const char* str2) {
	int n = 0;
	bool isChar = false;
	for (int i = pos; str1[i] != '\0'; ++i) {
		for (int j = 0; str2[j] != '\0'; ++j) {
			if (str1[i] == str2[j]) {
				n = i;
				isChar = true;
			}
		}
	}
	if (isChar = false)
		return 100;
	else
		return n;
}

int find_first_of(const char* str1, unsigned int pos, const char* str2) {
	int n = 0;
	bool isChar = false;
	for (int i = pos; str1[i] != '\0'; ++i) {
		for (int j = 0; str2[j] != '\0'; ++j) {
			if (str1[i] == str2[j]) {
				n = i;
				isChar = true;
				return n;
			}
		}
	}
	if (isChar = false)
		return 100;
	else
		return n;
}

int find_first_not_of(const char* str1, unsigned int pos, const char* str2) {
	int n = 0;
	bool notIn = false;
	for (int i = pos; str1[i] != '\0'; ++i) {
		notIn = false;
		for (int j = 0; str2[j] != '\0'; ++j) {
			if (str1[i] != str2[j]) {
				n = i;
				notIn = true;
				return n;
			}
		}
		if (notIn = true) return n;
	}
	if (notIn = false) return 100;
	else return n;
}

void pop_back(char* str) {
	int i = 0, n = 0;
	while (str[i] != '\0') {
		++n;
		++i;
	}
	str[n - 1] = '\0';
}

bool compare(const char* str1, const char* str2) {
	if (strlen_(str1) > strlen_(str2)) return 1;
	else if(strlen_(str1) < strlen_(str2)) return -1;
	else return 0;
}

void push_back(char* str, char ch) {
	int i = 0, n = 0;
	while (str[i] != '\0') {
		++n;
		++i;
	}
	str[n] = ch;
	str[n + 1] = '\0';
}

char& back(char* str) {
	return str[strlen_(str) - 1];
}



