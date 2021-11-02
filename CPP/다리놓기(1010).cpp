#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int dp[31][31] = { {0,}, };
	
	for (int i = 1; i < 31; i++) {
		dp[i][i] = 1;
		dp[i][1] = i;
	}

	for (int i = 1; i < 31; i++) {
		for (int j = 1; j <= i; j++) {
			if (j != 1 && j != i) {
				dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
			}
		}
	}

	int t;
	
	cin >> t;

	for (int i = 0; i < t; i++) {
		int left, right;
		cin >> left >> right;

		cout << dp[right][left] << '\n';
		
	}


	return 0;
}
