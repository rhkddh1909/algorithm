#include <stdio.h>
#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long dp[1002];
	long long arr[1002][10];
	long long num = 1;
	for (int i = 0; i < 10; i++) {
		arr[1][i] = 1;
	}
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		long long temp = 0;
		for (int j = 0; j < 10; j++) {
			temp += arr[i][j] % 10007;
			if (j == 0) {
				arr[i + 1][j] = 1;
			}
			else {
				num = (num % 10007) + ((arr[i][j]) % 10007);
				arr[i + 1][j] = num%10007;
			}
		}
		dp[i] = temp % 10007;
		num = 1;
	}
	cout << dp[n] << '\n';
}