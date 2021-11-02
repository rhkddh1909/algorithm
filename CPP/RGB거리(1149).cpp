#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001];
int values[1001][3];

int main(void) {

	ios::sync_with_stdio(false);

	cout.tie(NULL);
	cin.tie(NULL);
	int house;

	int result;

	int cost[3][1001] = { 0 };

	cin >> house;

	for (int i = 1; i <= house; i++) {

		int r_cost, g_cost, b_cost;

		cin >> r_cost >> g_cost >> b_cost;

		cost[0][i] = min(cost[1][i - 1], cost[2][i - 1]) + r_cost;

		cost[1][i] = min(cost[0][i - 1], cost[2][i - 1]) + g_cost;

		cost[2][i] = min(cost[0][i - 1], cost[1][i - 1]) + b_cost;

	}

	result = min(cost[0][house], min(cost[1][house], cost[2][house]));

	cout << result;

	return 0;

}
