#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char num[5002];
	long long dp[5001];
	int n = 0;
	cin >> num;
//	dp[0] = 1;


	for (int i = 0; num[i]; i++) {
		if ((num[i - 1] - '0' < 1 || num[i - 1] - '0' > 2) && i > 0 && num[i] - '0' == 0) {
			dp[i + 1] = 0;
			n++;
			break;
		}
		else {
			if (i == 0) {
				{
					if (num[i] - '0' == 0)
						dp[1] = 0;
					else {
						dp[1] = 1;
					}
				}
			}
			else {
				dp[i + 1] = dp[i] % 1000000;
				if ((num[i - 1] - '0') > 0 && (num[i - 1] - '0') < 3) {
					if (((num[i - 1] - '0') == 1 && (num[i] - '0') < 10) || ((num[i - 1] - '0') == 2 && (num[i] - '0') < 7))
						if (i == 1) {
							dp[i + 1] += 1;
						}
						else {
							dp[i + 1] += (dp[i - 1]) % 1000000;
						}
					if (num[i] - '0' == 0) {
						dp[i + 1] -= dp[i] % 1000000;
					}
				}
			}
		}
		n++;
	}
	cout << dp[n] % 1000000 << '\n';
}
