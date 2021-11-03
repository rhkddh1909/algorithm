#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[3];

	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}

	cout << (arr[0] + arr[1]) % arr[2] << '\n' << (arr[0] % arr[2] + arr[1] % arr[2]) % arr[2] << '\n' << (arr[0] * arr[1]) % arr[2] << '\n' << (arr[0] % arr[2] * arr[1] % arr[2]) % arr[2] << '\n';
}
