#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[1001];
	int dp[1001];
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		dp[i] = arr[i];
	}
	dp[0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], dp[i-j] + arr[j]);
		}
	}
	cout << dp[n];
}