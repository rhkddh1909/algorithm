#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int j = 1; j <= 9; j++) {
		cout << t << " * " << j << " = " << t * j << '\n';
	}

	return 0;
}