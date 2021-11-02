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
	int dp[100001] = { 0, };
	vector<int> coin;
	int n, k;
	cin >> n >> k;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp <= k) {
			dp[temp] = 1;
			coin.push_back(temp);
		}
	}
	for (int i = 1; i <= k; i++) {
		if (dp[i] != 0) {
			for (int j = 0; j < coin.size(); j++) {
				if (i + coin[j] <= k) {
					if (dp[i + coin[j]] == 0) {
						dp[i + coin[j]] = dp[i] + 1;
					}
					else {
						if (dp[i + coin[j]] > dp[i] + 1) {
							dp[i + coin[j]] = dp[i] + 1;
						}
					}
				}
			}
		}
	}
	if (dp[k] != 0) {
		cout << dp[k];
	}
	else {
		cout << dp[k] -1;
	}
	
	return 0;
}
