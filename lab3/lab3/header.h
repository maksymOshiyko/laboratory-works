#pragma once
#include <iostream>
int strlen_(const char* str);
bool strcmp_(const char* str1, const char* str2);
bool strncmp_(const char* str1, const char* str2, int n);
const char* strchr_(const char* str, char ch);
char* strcpy_(char* str1, const char* str2);
char* strncpy_(char* str1, const char* str2, int n);
char* strcat_(char* dest, const char* src);
char* strncat_(char* str1, const char* str2, int n);
const char* strstr_(const char* str1, const char* str2);
const char* strpbrk_(const char* str1, const char* str2);
int strspn_(const char* str1, const char* str2);
int strcspn_(const char* str1, const char* str2);
int find_last_of(const char* str1, unsigned int pos, const char* str2);
int find_first_of(const char* str1, unsigned int pos, const char* str2);
int find_first_not_of(const char* str1, unsigned int pos, const char* str2);
void pop_back(char* str);
bool compare(const char* str1, const char* str2);
void push_back(char* str, char ch);
char& back(char* str);