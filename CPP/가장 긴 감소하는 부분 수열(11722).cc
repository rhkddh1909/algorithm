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
	int cnt = 0;
	int dp[1001];
	int arr[1001];

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		dp[i] = 0;
	}
	
	dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (j < i && arr[j] > arr[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		if (dp[i] == 0) {
			dp[i] = 1;
		}
	}
	int result = 0;
	for (int i = 1; i <= n; i++) {
		result = max(result, dp[i]);
	}
	cout << result;
}