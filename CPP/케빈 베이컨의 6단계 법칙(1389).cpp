#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

void dfs(int p, int r);

vector<int> v[101];
int check[101][101] = { {0,} };
int n, m;
int ans[101] = { 0, };
int num;
int insa = 0;

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		num = 0;
		dfs(i, i);
	}
	ans[0] = 9999;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			ans[i] += check[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		if (ans[insa] > ans[i]) {
			insa = i;
		}
	}

	cout << insa;

	return 0;
}

void dfs(int p, int r) {
	if (p == r) {
		check[p][r] = -1;
	}
	for (int i = 0; i < v[r].size(); i++) {
		if (check[p][v[r][i]] > num+1 || check[p][v[r][i]] == 0) {
			num++;
			check[p][v[r][i]] = num;
			dfs(p, v[r][i]);
			num--;
		}
	}
}
