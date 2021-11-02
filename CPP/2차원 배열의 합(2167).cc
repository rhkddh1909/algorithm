#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	vector<pair<int,int>> q;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int dp[301][301] = { 0, };
	int n, m;

	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int temp;
			cin >> temp;
			//sum += temp;
			dp[i + 1][j + 1] = temp;
		}
	}

	int k;
	cin >> k;

	for (int a = 0; a < k; a++) {
		int i, j, x, y;

		cin >> i >> j >> x >> y;
		int sum = 0;
		for (int c = i; c <= x; c++) {
			for (int b = j; b <= y; b++) {
				sum += dp[c][b];
			}
		}
		cout << sum << '\n';
	}

	return 0;
}
