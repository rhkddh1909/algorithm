#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	
	int arr[10001];
	for (int i = 1; i <= 10000; i++) {
		arr[i] = 0;
	}

	for (int i = 1; i <= n; i++) {
		short temp;
		cin >> temp;
		arr[temp]++;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << '\n';
		}
	}
}