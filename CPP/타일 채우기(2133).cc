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
	
	int dp[31];
	dp[1] = 0;
	dp[2] = 3;
	dp[4] = 15;
	dp[3] = 0;
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			dp[i] = 0;
		}
		else {
			for (int j = i-2; j >= 0; j = j-2) {
				if (j + 2 == i) {
					dp[i] = dp[j] * 3;
				}
				else {
					dp[i] += dp[j] * 2;
				}
			}
		}
	}
	cout << dp[n];
} 