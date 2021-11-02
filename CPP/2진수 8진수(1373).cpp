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
	cin >> str;
	long long *arr = new long long[str.length()];
	int len = 0;
	int check = 0;
	long long c = 1;
	long long n = 0;

	for (int i = (str.length()) - 1; i >= 0; i--) {
		n += (str[i] - '0')*c;
		c = c * 2;
		check++;
		if (check == 3) {
			arr[len] = n;
			check = 0;
			n = 0;
			c = 1;
			len++;
		}
	}
	if (check != 0) {
		arr[len] = n;
		check = 0;
		n = 0;
		c = 1;
		len++;
	}
	for (int i = len-1; i >= 0; i--) {
		cout << arr[i];
	}
}
