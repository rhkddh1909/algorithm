#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
void dfs(int);
void bfs(int);
int check[1001];
vector<int> a[1001];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, v;
	cin >> n >> m >> v;


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
	dfs(v);
	cout << '\n';
	for (int i = 1; i < 1001; i++) {
		check[i] = 0;
	}
	bfs(v);
}
void dfs(int start) {
	check[start] = 1;
	cout << start << ' ';
	for (int i = 0; i < a[start].size(); i++) {
		int end = a[start][i];
		if (check[end] == 0) {
			dfs(end);
		}
	}
}
void bfs(int start) {
	queue<int> q;
	check[start] = 1;
	q.push(start);
	while (!q.empty()) {
		int start = q.front();
		q.pop();
		cout << start << ' ';
		for (int i = 0; i < a[start].size(); i++) {
			int end = a[start][i];
			if (check[end] == 0) {
				check[end] = 1;
				q.push(end);
			}
		}
	}
}
