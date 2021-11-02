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
	long long arr[317];
	long long dp[100001];
	
	for (int i = 1; i*i <=100000; i++) {
		arr[i] = i * i;
		dp[arr[i]] = 1;
	}
	dp[0] = 1000000;
		for (int i = 2; i <= n; i++) {
			dp[i] = i;
			for (int j = 1; j < 317; j++) { 
				if (i%arr[j] == 0) {
					dp[i] = min(dp[i],dp[i] = i / arr[j]);
				}
				else{
					dp[i] = min(dp[i], (i / arr[j] + dp[i % arr[j]]));
				}
			}
			if (dp[i] == i) {
				dp[i] = dp[i - 1] + 1;
			}

		}
		cout << dp[n];
} 