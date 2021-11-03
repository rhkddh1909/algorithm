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
	int dp[1001][2];
	int arr[1001][2];
	int flag = 0;


	for (int i = 1; i <= n; i++) {
		cin >> arr[i][0];
		dp[i][0] = 0;
		arr[n + 1 - i][1] = arr[i][0];
	}
	dp[1][0] = 1;
	dp[1][1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i][0] = 1;
		dp[i][1] = 1;
		for (int j = 1; j < i; j++) {

			if (dp[i][0] < dp[j][0]+1 && arr[j][0] < arr[i][0]) {
				dp[i][0]++;
			}
		}
		for (int j = 1; j < i; j++) {

			if (dp[i][1] < dp[j][1] + 1 && arr[j][1] < arr[i][1]) {
				dp[i][1]++;
			}
		}
	}
	int result = 0;
	for (int i = 1; i <= n; i++) {
		result = max(result, (dp[i][0] + dp[n + 1 - i][1]) - 1);
	}
	cout << result;
}