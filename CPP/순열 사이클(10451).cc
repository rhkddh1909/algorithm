#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
void dfs(int);
int check[1001];
vector<int> a(1001);
int cnt = 0;
int first;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int v;
		cin >> v;

		cnt = 0;
		a.clear();
		for (int i = 1; i <= v; i++) {
			
			int temp;
			cin >> temp;
			a.push_back(temp);
			check[i] = 0;
		}

		for (int i = 1; i <= v; i++) {
			if (check[i] == 0) {
				first = i;
				dfs(i);
			}
		}
		cout << cnt << '\n';
	}
}
void dfs(int start) {
	check[start] = 1;
	if (check[a[start-1]] == 0) {
		dfs(a[start-1]);
	}
	else {
		if (first == a[start-1]) {
			cnt++;
		}
	}
}
