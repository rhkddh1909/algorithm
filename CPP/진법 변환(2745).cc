#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int b;
	long long n = 0;
	long long c = 1;
	cin >> str >> b;
	for (int i = str.length()-1; i >= 0; i--) {
		if (str[i] - '0' < 10) {
			n += (str[i] - '0')*(c);
		}
		else {
			n += (str[i] - '7')*(c);
		}
		c = c * b;
	}
	cout << n;
}
