#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, k;
	long long sum = 0;

	cin >> n >> k;

	long long arr[10];

	for (int i = n-1; i >= 0; i--) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (k / arr[i] != 0) {
			sum += k / arr[i];
			k = k % arr[i];
		}
	}
	cout << sum;
}