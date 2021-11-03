#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void wall();
void dfs(pair<int, int>);

int arr[8][8];
int temp[8][8];
vector<pair<int, int>> v;
int wnum = 3;
int m, n;
int maxnum = 0;
int cnt = 0;

int main() {
	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	
	

	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) {
				v.push_back(make_pair(i, j));
			}
		}
	}

	wall();

	cout << maxnum;

	return 0;
}

void wall() {
	
	if (wnum == 0) {
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				temp[i][j] = arr[i][j];
			}
		}
		for (int i = 0; i < v.size(); i++) {
			dfs(v[i]);
		}
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (temp[i][j] == 0) {
					cnt++;
				}
			}
		}

		maxnum = max(maxnum,cnt);
		cnt = 0;
	}
	else {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 0) {
					arr[i][j] = 1;
					wnum--;
					wall();
					arr[i][j] = 0;
					wnum++;
				}
			}
		}
	}
}

void dfs(pair<int, int> p) {
	
	if (temp[p.first][p.second+1] == 0 && p.second != n-1) {
		temp[p.first][p.second + 1] = 2;
		dfs(make_pair(p.first, p.second + 1));
	}
	if (temp[p.first+1][p.second] == 0 && p.first != m-1) {
		temp[p.first + 1][p.second] = 2;
		dfs(make_pair(p.first+1, p.second));
	}
	if (temp[p.first][p.second-1] == 0 && p.second != 0) {
		temp[p.first][p.second - 1] = 2;
		dfs(make_pair(p.first, p.second - 1));
	}
	if (temp[p.first-1][p.second] == 0 && p.first != 0) {
		temp[p.first - 1][p.second] = 2;
		dfs(make_pair(p.first-1, p.second));
	}
}