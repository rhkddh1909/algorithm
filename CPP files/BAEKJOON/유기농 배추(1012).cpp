#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
#include <vector>

using namespace std;

int arr[50][2500];

int check[50][2500];

void bfs(int x, int y);
int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;

	
	

	for (int k = 0; k < t; k++) {
		int ans = 0;
		int m, n, num;
		cin >> m >> n >> num;
		for (int i = 0; i < 50; i++) {
			for (int j = 0; j < 2500; j++) {
				arr[i][j] = 0;
				check[i][j] = 0;
			}
		}

		for (int i = 0; i < num; i++) {
			int a, b;
			cin >> a >> b;
			arr[a][b] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 1 && check[i][j] == 0) {
					bfs(i, j);
					ans++;
				}
			}
		}

		cout << ans << '\n';
	}

	return 0;
}

void bfs(int x, int y) {
	
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	check[x][y] = 1;
	while (!q.empty()) {
		pair<int, int> pos = make_pair(q.front().first, q.front().second);
		q.pop();

		if (arr[pos.first + 1][pos.second] == 1 && check[pos.first + 1][pos.second] == 0) {
			check[pos.first + 1][pos.second] = 1;
			q.push(make_pair(pos.first + 1, pos.second));
		}
		if (arr[pos.first][pos.second+1] == 1 && check[pos.first][pos.second+1] == 0) {
			check[pos.first][pos.second+1] = 1;
			q.push(make_pair(pos.first, pos.second+1));
		}
		if (arr[pos.first - 1][pos.second] == 1 && check[pos.first - 1][pos.second] == 0) {
			check[pos.first - 1][pos.second] = 1;
			q.push(make_pair(pos.first - 1, pos.second));
		}
		if (arr[pos.first][pos.second-1] == 1 && check[pos.first][pos.second-1] == 0) {
			check[pos.first][pos.second-1] = 1;
			q.push(make_pair(pos.first, pos.second-1));
		}
	}
}
