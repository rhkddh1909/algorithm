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
	int k;
	cin >> k;
	long long dp[201][201];
	long long temp = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (j == 1) {
				dp[i][j] = 1;
			}
			else {
				for (int a = 1; a <= i; a++) {
					temp += (dp[a][j - 1] % 1000000000);
					
				}
				dp[i][j] = (temp)%1000000000 +1 ;
			}
			temp = 0;
		}
	}
	cout << dp[n][k]% 1000000000 << '\n';
}