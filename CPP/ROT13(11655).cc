#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char str[101];
	fgets(str, 101, stdin);
	for (int i = 0; str[i]; i++) {
		int a = str[i];
		if (65 <= a && a <= 90) {
			a = a + 13;
			if (a / 90 == 1 && a % 90 != 0) {
				a = 64 + a % 90;
			}
		}
		else if (97 <= a && a <= 122) {
			a = a + 13;
			if (a / 122 == 1 && a % 122 != 0) {
				a = 96 + a % 122;
			}	
		}
		str[i] = a;
	}
	cout << str;
}