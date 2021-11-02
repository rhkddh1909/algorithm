#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

void bfs(int, int);
int startx, starty;
int finx, finy;
int check[300][300] = { {0,} };
int n;

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		
		
		cin >> n;
		cin >> startx >> starty >> finx >> finy;

		bfs(startx, starty);

		for (int i = 0; i < 300; i++) {
			for (int j = 0; j < 300; j++) {
				check[i][j] = 0;
			}
		}
	}

	return 0;
}

void bfs(int x, int y) {
	queue<pair<pair<int, int>, int>> q;
	q.push(make_pair(make_pair(x,y),0));
	check[x][y] = 1;
	while (!q.empty()) {
		pair<pair<int,int>, int> p = q.front();
		if (p.first.first == finx && p.first.second == finy) {
			cout << p.second << '\n';
			break;
		}
		q.pop();
		if (p.first.second < n - 2) {
			if (p.first.first != 0 && check[p.first.first - 1][p.first.second + 2] == 0) {
				check[p.first.first - 1][p.first.second + 2] = 1;
				q.push(make_pair(make_pair(p.first.first - 1, p.first.second + 2), p.second + 1));
			}
			if (p.first.first != n-1 && check[p.first.first + 1][p.first.second + 2] == 0) {
				check[p.first.first + 1][p.first.second + 2] = 1;
				q.push(make_pair(make_pair(p.first.first + 1, p.first.second + 2), p.second + 1));
			}
		}
		if (p.first.first < n - 2) {
			if (p.first.second != 0 && check[p.first.first + 2][p.first.second - 1] == 0) {
				check[p.first.first + 2][p.first.second - 1] = 1;
				q.push(make_pair(make_pair(p.first.first + 2, p.first.second - 1), p.second + 1));
			}
			if (p.first.second != n - 1 && check[p.first.first + 2][p.first.second + 1] == 0) {
				check[p.first.first + 2][p.first.second + 1] = 1;
				q.push(make_pair(make_pair(p.first.first + 2, p.first.second + 1), p.second + 1));
			}
		}
		if (p.first.second > 1) {
			if (p.first.first != 0 && check[p.first.first - 1][p.first.second - 2] == 0) {
				check[p.first.first - 1][p.first.second - 2] = 1;
				q.push(make_pair(make_pair(p.first.first - 1, p.first.second - 2), p.second + 1));
			}
			if (p.first.first != n - 1 && check[p.first.first + 1][p.first.second - 2] == 0) {
				check[p.first.first + 1][p.first.second - 2] = 1;
				q.push(make_pair(make_pair(p.first.first + 1, p.first.second - 2), p.second + 1));
			}
		}
		if (p.first.first > 1) {
			if (p.first.second != 0 && check[p.first.first - 2][p.first.second - 1] == 0) {
				check[p.first.first - 2][p.first.second - 1] = 1;
				q.push(make_pair(make_pair(p.first.first - 2, p.first.second - 1), p.second + 1));
			}
			if (p.first.second != n - 1 && check[p.first.first - 2][p.first.second + 1] == 0) {
				check[p.first.first - 2][p.first.second + 1] = 1;
				q.push(make_pair(make_pair(p.first.first - 2, p.first.second + 1), p.second + 1));
			}
		}
	}
}