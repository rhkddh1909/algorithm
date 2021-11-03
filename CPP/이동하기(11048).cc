#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int dp[1001][1001] = { {0,} };
	int maze[1001][1001];
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> maze[i][j];
		}
	}
	dp[1][1] = maze[1][1];

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == n && j == m) {
				break;
			}
			else if(i == n){
				dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + maze[i][j + 1]);
			}
			else if(j == m){
				dp[i+1][j] = max(dp[i+1][j], dp[i][j] + maze[i+1][j]);
			}
			else {
				dp[i][j + 1] = max(dp[i][j + 1], dp[i][j] + maze[i][j + 1]);
				dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + maze[i + 1][j]);
				dp[i + 1][j+1] = max(dp[i + 1][j+1], dp[i][j] + maze[i + 1][j+1]);
			}
		}
	}

	cout << dp[n][m];
	
	return 0;
}
