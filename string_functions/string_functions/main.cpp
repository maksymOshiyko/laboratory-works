#include "header.h"

using namespace std;


int main() {

	char str[256];
	char str2[256];
	int choice;

	cout << "Enter string: ";
	cin.getline(str, 256, '\n');
	cout << "Enter 2nd string: ";
	cin.getline(str2, 256, '\n');
	cout << "What function do you want to test?\n" <<
		" 1 - strlen\n 2 - strcmp\n 3 - strncmp\n 4 - strchr\n 5 - strcpy\n 6 - strncpy\n 7 - strcat\n" <<
		" 8 - strncat\n 9 - strstr\n 10 - strpbrk\n 11 - strspn\n 12 - strcspn\n 13 - strcpy_s\n" <<
		" 14 - find_last_of\n 15 - find_first_of\n 16 - find_first_not_of\n 17 - pop.back\n 18 - compare\n 19 - push_back\n 20 - back\n";
	cin >> choice;

	switch (choice) {

	case 1: {
		cout << "The length of str: " << strlen_(str);
	}
			break;
	case 2: {
		if (strcmp_(str, str2))
			cout << "True";
		else cout << "False";
	}
			break;
	case 3: {
		int n;
		cout << "Enter n: ";
		cin >> n;
		if (strncmp_(str, str2, n))
			cout << "True";
		else cout << "False";
	}
			break;
	case 4: {
		char ch;
		cout << "Enter char: ";
		cin >> ch;
		const char* ch1 = strchr_(str, ch);
		if (ch1 == nullptr)
			cout << "Not found";
		else cout << "The position of char in str: " << (ch1 - str + 1);
	}
			break;
	case 5: {
		strcpy_(str, str2);
		cout << str;
	}
			break;
	case 6: {
		int n;
		cout << "Enter n: ";
		cin >> n;
		strncpy_(str, str2, n);
		cout << str;
	}
			break;
	case 7: {
		strcat_(str, str2);
		cout << "The result: " << str;
	}
			break;
	case 8: {
		int n;
		cout << "Enter n: ";
		cin >> n;
		strncat_(str, str2, n);
		cout << "The result: " << str;
	}
			break;
	case 9: {
		const char* ch1 = strstr_(str, str2);
		if (ch1 == nullptr)
			cout << "Not found.";
		else cout << ch1;
	}
			break;
	case 10: {
		const char* ch1;
		for (int i = 0; str2[i] != '\0'; i++) {
			ch1 = strpbrk_(str, str2 + i);
			if (ch1 == nullptr) continue;
			else cout << *ch1;
		}
	}
			 break;
	case 11: {
		cout << "Number of found elements: " << strspn_(str, str2);
	}
			 break;
	case 12: {
		cout << "Position of first found element: " << strcspn_(str, str2);
	}
			 break;
	case 13: {

	}
			 break;
	case 14: {
		int n;
		cout << "Enter the position of the last character in the string to be considered in the search: ";
		cin >> n;
		cout << "Last occurrence of content in string: ";
		if (find_last_of(str, n, str2) == 100) cout << "Not found.";
		else cout << find_last_of(str, n, str2);
	}
			 break;
	case 15: {
		int n;
		cout << "Enter the position of the last character in the string to be considered in the search: ";
		cin >> n;
		cout << "Find 1st character in string: ";
		if (find_first_of(str, n, str2) == 100) cout << "Not found.";
		else cout << find_first_of(str, n, str2);
	}
			 break;
	case 16: {
		int n;
		cout << "Enter the position of the last character in the string to be considered in the search: ";
		cin >> n;
		cout << "Absence of character in string: ";
		if (find_first_not_of(str, n, str2) == 100) cout << "Not found.";
		else cout << find_first_not_of(str, n, str2);
	}
			 break;
	case 17: {
		pop_back(str);
		cout << str;
	}
			 break;
	case 18: {
		cout << compare(str, str2);
	}
			 break;
	case 19: {
		char ch;
		cout << "Enter char: ";
		cin >> ch;
		push_back(str, ch);
		cout << "New str: " << str;
	}
			 break;
	case 20: {
		cout << "Last el: " << back(str);
	}
	default: return 0;
		break;
	}
	return 0;
}