#include <iostream>
#include <algorithm>

using namespace std;

int dp[501][501] = {0,};
int pos[501];
int values[501][501];


int main(void) {

	ios::sync_with_stdio(false);

	cout.tie(NULL);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> values[i][j];
			if (i == n) {
				dp[i][j] = values[i][j];
			}
		}
	}
	for (int i = n; i > 1; i--) {
		for (int j = 1; j <= i; j++) {
			if (j == 1) {
				dp[i - 1][j] = max(dp[i-1][j],(dp[i][j] + values[i - 1][j]));
			}
			else if (j == i) {
				dp[i - 1][j-1] = max(dp[i - 1][j - 1],(dp[i][j] + values[i - 1][j-1]));
			}
			else {
				dp[i - 1][j-1] = max(dp[i-1][j-1],(dp[i][j] + values[i - 1][j-1]));
				dp[i - 1][j] = max(dp[i - 1][j], (dp[i][j] + values[i - 1][j]));
			}
		}

	}
	cout << dp[1][1];
}