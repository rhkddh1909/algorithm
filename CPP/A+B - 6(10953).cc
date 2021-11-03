#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int t;
	char temp[1024];
	char* result;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> temp;
		result = strtok(temp, ",");
		int a = atoi(result);
		result = strtok(NULL, ",");
		int b = atoi(result);
		cout << a + b << '\n';
	}

	return 0;
}