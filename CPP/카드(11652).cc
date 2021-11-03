#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	long long arr[2];
	long long *num1 = new long long[n];
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		cin >> num1[i];
	}
	
	sort(num1, num1 + n);
	arr[0] = num1[0];
	arr[1] = 1;
	for (int i = 1; i < n; i++) {
		if (num1[i] == num1[i - 1]) {
			cnt++;
		}
		else {
			if (arr[1] < cnt) {
				arr[0] = num1[i - 1];
				arr[1] = cnt;
			}
			cnt = 1;
		}
	}
	if (arr[1] < cnt) {
		arr[0] = num1[n - 1];
		arr[1] = cnt;
	}
	cnt = 1;

	cout << arr[0];

	delete[] num1;
}