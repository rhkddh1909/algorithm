#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int>> v;
	vector<pair<int, int>> dp;
	for (int i = 0; i < n; i++) {
		int t;
		int p;
		cin >> t >> p;
		if (i + t > n) {
			v.push_back(make_pair(t, 0));
		}
		else {
			v.push_back(make_pair(t, p));
		}
	}
	dp.push_back(v[0]);
	int maxnum = 0;
	int answer = dp[0].second;
	for (int i = 1; i < n; i++) {
		maxnum = 0;
		for (int j = 0; j < i; j++) {
			if (dp[j].first <= i) {
				maxnum = max(dp[j].second, maxnum);
			}
		}
		dp.push_back(make_pair(i + v[i].first, maxnum+v[i].second));
		
		answer = max(answer, dp[i].second);
	}

	cout << answer;

	return 0;
}