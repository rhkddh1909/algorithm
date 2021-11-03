#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long arr[10];
	long long dp[101];
	long long a[10]= { 0,1,1,1,1,1,1,1,1,1 };
	long long temp;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		temp = 0;
		for (int j = 0; j < 10; j++) {
			temp += a[j];
			if (j == 0) {
				arr[j] = (a[j + 1])%1000000000;
			}
			else if (j == 9) {
				arr[j] = (a[j - 1]) % 1000000000;
			}
			else {
				arr[j] = (a[j - 1] + a[j + 1]) % 1000000000;
			}
		}
		for (int k = 0; k < 10; k++) {
			a[k] = arr[k] % 1000000000;
		}
		dp[i] = temp % 1000000000;
	}

	cout << dp[n] % 1000000000 << '\n';
}