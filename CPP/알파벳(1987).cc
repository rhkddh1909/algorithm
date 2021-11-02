#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

void dfs(int x, int y);

int r, c;
int maxn = 0;
char ch[20][20];

int check[26] = { 0, };

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> ch[i][j];
		}
	}

	dfs(0, 0);

	cout << maxn;

	return 0;
}

void dfs(int x, int y) {
	int sum = 0;
	int a = ((ch[x][y] - 'A'));
	check[(ch[x][y] - 'A')] = 1;
	/*for (int i = 0; i < 26; i++) {
		cout << check[i] << ' ';
	}
	cout << '\n';*/
	if (check[(ch[x][y + 1] - 'A')] == 0 && y != c - 1) {
		dfs(x, y + 1);
	}
	if (check[(ch[x + 1][y] - 'A')] == 0 && x != r - 1) {
		dfs(x + 1, y);
	}
	if (check[(ch[x][y - 1] - 'A')] == 0 && y != 0) {
		dfs(x, y - 1);
	}
	if (check[(ch[x - 1][y] - 'A')] == 0 && x != 0) {
		dfs(x - 1, y);
	}

	for (int i = 0; i < 26; i++) {
		sum += check[i];
	}

	check[(ch[x][y] - 'A') ] = 0;
	
	maxn = max(maxn, sum);
}