#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[2];
	int minn;
	int t;
	cin >> t;
	for (int k = 0; k < t; k++) {
		for (int i = 0; i < 2; i++) {
			cin >> arr[i];
		}
		int n = max(arr[0], arr[1]);
		int n2 = min(arr[0], arr[1]);
		for (int i = 1; i <= n; i++) {
			if ((n * i) % n2 == 0) {
				minn = n * i;
				break;
			}
		}
		cout << minn << '\n';
	}
}
