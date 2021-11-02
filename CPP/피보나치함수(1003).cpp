#include <iostream>
#include <algorithm>

using namespace std;

int dp0[41];
int dp1[41];
int main(void) {
	
	ios::sync_with_stdio(false);

	cout.tie(NULL);
	cin.tie(NULL);
	
	int t;
	int n;

	dp0[0] = 1;
	dp1[0] = 0;
	dp0[1] = 0;
	dp1[1] = 1;

	for (int i = 2; i <= 40; i++) {
		dp0[i] = dp0[i - 1] + dp0[i - 2];
		dp1[i] = dp1[i - 1] + dp1[i - 2];
	}

	cin >> t;
	
	for (int i = 0; i < t; i++) {
		cin >> n;
		cout << dp0[n] << ' ' << dp1[n] << '\n';
	}
}
