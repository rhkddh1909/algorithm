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

	int n, k;
	cin >> n >> k;
	long long *arr = new long long[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	cout << arr[k - 1];

	delete[] arr;
	
}