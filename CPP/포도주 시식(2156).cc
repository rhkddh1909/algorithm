#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int dp[10001];
	int c[10001][3];
	cin >> n;
	int *arr = new int[n+1];


	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	c[2][0] = max(dp[1], 0);
	c[2][1] = arr[2];
	c[2][2] = arr[1]+arr[2];
	dp[2] = arr[1] + arr[2];


	for (int i = 3; i <= n; i++) {
		c[i][0] = max(c[i - 1][0], c[i - 1][1]);
		c[i][0] = max(c[i][0], c[i - 1][2]);
		c[i][1] = c[i - 1][0]+arr[i];
		c[i][2] = c[i - 1][1]+arr[i];
		dp[i] = max(c[i][0], c[i][1]);
		dp[i] = max(dp[i], c[i][2]);
	}
	cout << dp[n];
}