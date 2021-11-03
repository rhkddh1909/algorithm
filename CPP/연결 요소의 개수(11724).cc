#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
void dfs(int);
//void bfs(int);
int check[1001];
vector<int> a[1001];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, cnt = 0;
	cin >> n >> m;


	for (int i = 0; i < m; i++) {
		int temp, temp1;
		cin >> temp >> temp1;

		a[temp].push_back(temp1);
		a[temp1].push_back(temp);

	}
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}
	for (int i = 1; i < 1001; i++) {
		check[i] = 0;
	}
	for (int i = 1; i <= n; i++) {
		if (check[i] == 0) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
}
void dfs(int start) {
	check[start] = 1;
	for (int i = 0; i < a[start].size(); i++) {
		int end = a[start][i];
		if (check[end] == 0) {
			dfs(end);
		}
	}
}