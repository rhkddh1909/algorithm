#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char a[4][1000];

	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}

	char *c = strcat(a[0], a[1]);
	char *b = strcat(a[2], a[3]);

	long long num1 = atoll(c);
	long long num2 = atoll(b);
	cout << num1 + num2;
}