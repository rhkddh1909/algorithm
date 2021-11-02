#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int dp[301][301] = {0,};

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;

	dp[1][1] = 0;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (j == 1 && i != 1) {
				dp[i][j] = i-1;
			}
			else if (i == 1 && j != 1) {
				dp[i][j] = j-1;
			}
			else {
				dp[i][j] = dp[i][1] * j + j - 1;
			}
		}
	}

	cout << dp[n][m];

	return 0;
}