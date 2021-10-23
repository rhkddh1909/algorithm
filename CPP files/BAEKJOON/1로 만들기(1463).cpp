#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000001];

int main(void) {
	
	ios::sync_with_stdio(false);

	cout.tie(NULL);
	cin.tie(NULL);
	
	int n;
	int minus;
	int dtwo;
	int dthree;

	dp[0] = 0;
	dp[1] = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		minus = dp[i - 1]+1;
		if (i % 2 == 0) {
			dtwo = dp[i / 2] + 1;
		}
		else {
			dtwo = 99999;
		}
		if (i % 3 == 0) {
			dthree = dp[i / 3] + 1;
		}
		else {
			dthree = 99999;
		}
		dp[i] = min(minus, dtwo);
		dp[i] = min(dp[i], dthree);
	}

	cout << dp[n];
}
