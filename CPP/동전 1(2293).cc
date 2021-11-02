#include <iostream>
#include <queue>

using namespace std;
int arr[101] = {0,};
int dp[10001] = { 0, };
int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	dp[0] = 1;
	for (int j = 1; j <= n; j++) {
		for (int i = arr[j]; i <= k; i++) {
			dp[i] = dp[i] + dp[i - arr[j]];
		}
	}

	cout << dp[k];

	return 0;
}