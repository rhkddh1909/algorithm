#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int dp[301][3];
	int arr[301];
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dp[1][0] = arr[1];
	dp[1][1] = 0;
	dp[1][2] = 0;
	dp[2][0] = arr[2];
	dp[2][1] = arr[1]+ arr[2];
	dp[2][2] = 0;

	for (int i = 3; i <= n; i++) {
		dp[i][0] = max(dp[i - 2][0] + arr[i], dp[i - 2][1] + arr[i]);
		dp[i][1] = dp[i - 1][0] + arr[i];
		dp[i][2] = dp[i - 2][1];
	}

	cout << max(dp[n][0],dp[n][1]) << '\n';
	
}