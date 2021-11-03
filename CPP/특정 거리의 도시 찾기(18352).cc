#define _CRT_SECURE_NO_WARNINGS


#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std; \

void bfs(int start);
int* check;
vector<long>* v;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n, m, k, x;

	cin >> n >> m >> k >> x;
	check = new int[n+1];

	for (int i = 1; i < n+1; i++) {
		check[i] = 3000000;
	}
	v = new vector<long>[n+1];

	for (int i = 0; i < m; i++) {
		long tmpn;
		long tmpm;
		cin >> tmpn >> tmpm;
		v[tmpn].push_back(tmpm);
	}
	check[x] = 0;

	bfs(x);
	int cnt = 0;

	for (int i = 1; i < n+1; i++) {
		if(check[i] == k){
			cnt++;
			cout << i << '\n';
		}
	}

	if (cnt == 0) {
		cout << "-1";
	}

	return 0;
}

void bfs(int start) {
	queue<int>  q;
	q.push(start);
	while (!q.empty()) {
		int pos = q.front();
		q.pop();
		for (int i = 0; i < v[pos].size(); i++) {
			if (check[v[pos][i]] > check[pos] + 1) {
				check[v[pos][i]] = check[pos] + 1;
				q.push(v[pos][i]);
			}
		}
	}
}