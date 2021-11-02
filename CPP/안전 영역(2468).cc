#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

void bfs(int, int, int);

queue<pair<int, int>> q;
int arr[100][100] = { {0,} };
int check[100][100] = { {0,} };
int cnt = 0;
int ans = 1;
int n;
int maxn = 0;
int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);



	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			maxn = max(maxn, arr[i][j]);
		}
	}
	//cout << maxn << '\n';
	for (int i = 1; i < maxn; i++) {
		cnt = 0;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (arr[j][k] > i && check[j][k] == 0) {
					bfs(j, k, i);
					cnt++;
				}
			}
		}
		/*for (int k = 0; k < n; k++) {
			for (int j = 0; j < n; j++) {
				cout << check[k][j] << ' ';
			}
			cout << '\n';
		}
		cout << i << ' ' << cnt << '\n';*/
		ans = max(ans, cnt);
		for (int k = 0; k < n; k++) {
			for (int j = 0; j < n; j++) {
				check[k][j] = 0;
			}
		}
	}

	cout << ans;

	return 0;
}

void bfs(int x, int y, int height) {
	check[x][y] = 1;
	q.push(make_pair(x, y));
	while (!q.empty()) {
		pair<int, int> temp = q.front();
		q.pop();
		if (arr[temp.first][temp.second + 1] > height && check[temp.first][temp.second + 1] == 0 && temp.second != n - 1) {
			q.push(make_pair(temp.first, temp.second + 1));
			check[temp.first][temp.second + 1] = 1;
		}
		if (arr[temp.first + 1][temp.second] > height && check[temp.first + 1][temp.second] == 0 && temp.first != n - 1) {
			q.push(make_pair(temp.first + 1, temp.second));
			check[temp.first + 1][temp.second] = 1;
		}
		if (arr[temp.first][temp.second - 1] > height && check[temp.first][temp.second - 1] == 0 && temp.second != 0) {
			q.push(make_pair(temp.first, temp.second - 1));
			check[temp.first][temp.second - 1] = 1;
		}
		if (arr[temp.first - 1][temp.second] > height && check[temp.first - 1][temp.second] == 0 && temp.first != 0) {
			q.push(make_pair(temp.first - 1, temp.second));
			check[temp.first - 1][temp.second] = 1;
		}
	}
}