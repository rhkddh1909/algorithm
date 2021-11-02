#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n, t;
	cin >> t;
	for (int c = 0; c < t; c++) {
		cin >> n;
		int **a = new int*[2];
		for (int i = 0; i < 2; i++) {
			a[i] = new int[n+1];
		}
		int **b = new int*[n+1];
		for (int i = 0; i < n+1; i++) {
			b[i] = new int[3];
		}
		int *dp = new int[n+1];
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 1; i <= n; i++) {
			if (i == 1) {
				dp[1] = max(a[0][1], a[1][1]);
				b[1][0] = 0;
				b[1][1] = a[0][1];
				b[1][2] = a[1][1];
			}
			else {
				b[i][0] = max(b[i-1][0], b[i-1][1]);
				b[i][0] = max(b[i][0], b[i - 1][2]);
				b[i][1] = max((b[i - 1][0] + a[0][i]), (b[i - 1][2] + a[0][i]));
				b[i][2] = max((b[i - 1][0] + a[1][i]), (b[i - 1][1] + a[1][i]));
				dp[i] = max(b[i][0], b[i][1]);
				dp[i] = max(dp[i], b[i][2]);
			}

		}

		cout << dp[n] << '\n';
	}
}