#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int dp[1001];
	dp[1] = 1;
	dp[2] = 2;
	for (int a = 3; a <= n; a++) {
		dp[a] = (dp[a - 1] + dp[a - 2]) % 10007;
	}
	cout << dp[n] ;
}