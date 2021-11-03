#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n;
	long long b;
	int q = 0;
	int arr[100000];
	cin >> n >> b;
	char c[36] = { '0', '1', '2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	for (int i = 1; n / b != 0; i++) {
		arr[q] = n % b;
		n = n / b;
		q++;
		
	}
	if (n / b == 0) {
		arr[q] = n % b;
		q++;
	}
	for (int i = q - 1; i >= 0; i--) {
		cout << c[arr[i]];
	}
}
