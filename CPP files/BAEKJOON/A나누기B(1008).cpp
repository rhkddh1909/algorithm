#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int c = 0 , d = 0;
	long double a, b;
	cin >> a >> b;
	while (c != 9) {
		c++;
		d = (((int)a)*10) % (int)b;
		if (d == 0) {
			break;
		}
	}
	if (b != 0) {
		cout << fixed;
		cout.precision(c);
		cout << a / b;
	}
}
