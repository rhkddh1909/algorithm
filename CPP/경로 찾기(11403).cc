#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int arr[100][100];

int check[100] = {0,};
int ans[100] = { 0, };
vector<int> v[100];

void bfs(int);

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				v[i].push_back(j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		bfs(i);
		for (int j = 0; j < n; j++) {
			cout << ans[j] << ' ';
			ans[j] = 0;
			check[j] = 0;
		}
		cout << '\n';
	}

	return 0;
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		int step = q.front();
		q.pop();
		for (int i = 0; i < v[step].size(); i++) {

			if (check[v[step][i]] == 0) {
				ans[v[step][i]] = 1;
				check[v[step][i]] = 1;
				q.push(v[step][i]);
			}
		}
	}
}