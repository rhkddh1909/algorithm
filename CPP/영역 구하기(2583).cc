#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void fill(pair<pair<int, int>, pair<int, int>>);
void dfs(int x, int y, int num);

int arr[100][100] = { {0,}, };
int check[100][100] = { {0,} };
vector<pair<pair<int, int>, pair<int, int>>> v;
int m, n, k;
int knum[100] = { 0 };

int main() {
	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int num = 0;
	
	cin >> m >> n >> k;

	for (int i = 0; i < k; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		v.push_back(make_pair(make_pair(x1, y1), make_pair(x2, y2)));
		fill(v[i]);
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0 && check[i][j] == 0) {
				check[i][j] = 1;
				knum[num]++;
				dfs(i, j, num);
				num++;
			}
		}
	}

	sort(knum, knum + num);

	cout << num << '\n';
	for (int i = 0; i < num; i++) {
		cout << knum[i] << ' ';
	}

	return 0;

	
}

void fill(pair<pair<int, int>, pair<int, int>> p) {
	for (int i = p.first.second; i < p.second.second; i++) {
		for (int j = p.first.first; j < p.second.first; j++) {
			arr[i][j] = 1;
		}
	}
}

void dfs(int x, int y, int num) {
	if (arr[x][y + 1] == 0 && y != n - 1 && check[x][y+1] == 0) {
		check[x][y + 1] = 1;
		knum[num]++;
		dfs(x, y + 1, num);
	}
	if (arr[x+1][y] == 0 && x != m - 1 && check[x+1][y] == 0) {
		check[x+1][y] = 1;
		knum[num]++;
		dfs(x+1, y, num);
	}
	if (arr[x][y - 1] == 0 && y != 0 && check[x][y - 1] == 0) {
		check[x][y - 1] = 1;
		knum[num]++;
		dfs(x, y - 1, num);
	}
	if (arr[x-1][y] == 0 && x != 0 && check[x-1][y] == 0) {
		check[x-1][y] = 1;
		knum[num]++;
		dfs(x-1, y, num);
	}
}