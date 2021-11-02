#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int tomato[100][100][100] = { {{0,},}, };
int m, n, h;
queue<pair<pair<int, int>, pair<int, int>>> q;
pair<pair<int, int>, pair<int, int>> p;

int check;

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);


	cin >> m >> n >> h;

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> tomato[i][j][k];
				if (tomato[i][j][k] == 1) {
					q.push(make_pair(make_pair(j, k), make_pair(i,0)));
				}
			}
		}
	}
	while (!q.empty()) {
		p = q.front();
		q.pop();
		if (h > 1) {
			if (p.second.first == 0) {
				if (tomato[p.second.first + 1][p.first.first][p.first.second] == 0) {
					tomato[p.second.first + 1][p.first.first][p.first.second] = 1;
					q.push(make_pair(make_pair(p.first.first, p.first.second), make_pair(p.second.first + 1, p.second.second + 1)));
				}
			}
			else if (p.second.first == h - 1) {
				if (tomato[p.second.first - 1][p.first.first][p.first.second] == 0) {
					tomato[p.second.first - 1][p.first.first][p.first.second] = 1;
					q.push(make_pair(make_pair(p.first.first, p.first.second), make_pair(p.second.first - 1, p.second.second + 1)));
				}
			}
			else {
				if (tomato[p.second.first + 1][p.first.first][p.first.second] == 0) {
					tomato[p.second.first + 1][p.first.first][p.first.second] = 1;
					q.push(make_pair(make_pair(p.first.first, p.first.second), make_pair(p.second.first + 1, p.second.second + 1)));
				}
				if (tomato[p.second.first - 1][p.first.first][p.first.second] == 0) {
					tomato[p.second.first - 1][p.first.first][p.first.second] = 1;
					q.push(make_pair(make_pair(p.first.first, p.first.second), make_pair(p.second.first - 1, p.second.second + 1)));
				}

			}
		}
		if (tomato[p.second.first][p.first.first][p.first.second+1] == 0 && p.first.second != m-1) {
			tomato[p.second.first][p.first.first][p.first.second+1] = 1;
			q.push(make_pair(make_pair(p.first.first, p.first.second+1), make_pair(p.second.first, p.second.second + 1)));
		}
		if (tomato[p.second.first][p.first.first + 1][p.first.second] == 0 && p.first.first != n - 1) {
			tomato[p.second.first][p.first.first + 1][p.first.second] = 1;
			q.push(make_pair(make_pair(p.first.first + 1, p.first.second), make_pair(p.second.first, p.second.second + 1)));
		}
		if (tomato[p.second.first][p.first.first][p.first.second - 1] == 0 && p.first.second != 0) {
			tomato[p.second.first][p.first.first][p.first.second - 1] = 1;
			q.push(make_pair(make_pair(p.first.first, p.first.second - 1), make_pair(p.second.first, p.second.second + 1)));
		}
		if (tomato[p.second.first][p.first.first-1][p.first.second] == 0 && p.first.first != 0) {
			tomato[p.second.first][p.first.first-1][p.first.second] = 1;
			q.push(make_pair(make_pair(p.first.first-1, p.first.second), make_pair(p.second.first, p.second.second + 1)));
		}
	}
	
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (tomato[i][j][k] == 0) {
					check = 1;
					break;
				}
			}
		}
	}

	if (check) {
		cout << "-1";
	}
	else {
		cout << p.second.second;
	}

	return 0;
}