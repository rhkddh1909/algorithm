#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
void dfs(int, int);
int check[20001];
vector<int> a[20001];
int cnt = 0;
bool ans = true;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int v, e;
		cin >> v >> e;

		ans = true;
		cnt = 0;
		for (int i = 1; i <= v; i++) {
			a[i].clear();
			check[i] = 0;
		}
		for (int i = 1; i <= e; i++) {
			int temp, temp1;
			cin >> temp >> temp1;
			a[temp].push_back(temp1);
			a[temp1].push_back(temp);
		}
		for (int i = 1; i <= v; i++) {
			if (check[i] == 0) {
				dfs(i,1);
			}
		}
		for (int i = 1; i <= v; i++) {
			for (int j = 0; j < a[i].size(); j++) {
				int k = a[i][j];
				if (check[i] == check[k]) {
					ans = false;
				}
			}
		}
		if (ans) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
		
	}
}
void dfs(int start, int c) {
	check[start] = c;
	for (int i = 0; i < a[start].size(); i++) {
		int end = a[start][i];
		if (check[end] == 0) {
			dfs(end, 3-c);
		}
	}
}