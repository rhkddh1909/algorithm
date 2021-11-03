#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

void dfs(int x, int y, char c);
void dfs2(int x, int y, char c);
int n = 5;
char arr[100][100];
char arrrg[100][100];
int checkrgb[100][100] = { {0,}, };
int checkrg[100][100] = { {0,}, };;
int rgb = 0;
int rg = 0;

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != 'G') {
				arrrg[i][j] = arr[i][j];
			}
			else {
				arrrg[i][j] = 'R';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 'B' && checkrgb[i][j] == 0) {
				dfs(i, j, 'B');
				rgb++;
				rg++;
			}
			if (arr[i][j] == 'G') {
				if (checkrgb[i][j] == 0) {
					dfs(i, j, 'G');
					rgb++;
					
				}
				if (checkrg[i][j] == 0) {
					dfs2(i, j, 'R');
					rg++;
				}
			}
			if (arr[i][j] == 'R') {
				if (checkrgb[i][j] == 0) {
					dfs(i, j, 'R');
					rgb++;
				}
				if (checkrg[i][j] == 0) {
					dfs2(i, j, 'R');
					rg++;
				}
			}
		}
	}

	cout << rgb << ' ' << rg;

	return 0;
}

void dfs(int x, int y, char c) {
	checkrgb[x][y] = 1;
	if (arr[x][y + 1] == c && checkrgb[x][y+1] == 0 && y != n-1) {
		dfs(x, y + 1, c);
	}
	if (arr[x+1][y] == c && checkrgb[x + 1][y ] == 0 && x != n - 1) {
		dfs(x+1, y, c);
	}
	if (arr[x][y - 1] == c && checkrgb[x][y - 1] == 0 && y != 0) {
		dfs(x, y-1, c);
	}
	if (arr[x-1][y] == c && checkrgb[x - 1][y] == 0 && x != 0) {
		dfs(x-1, y, c);
	}
}

void dfs2(int x, int y, char c) {
	checkrg[x][y] = 1;
	if (arrrg[x][y + 1] == c && checkrg[x][y + 1] == 0 && y != n - 1) {
		dfs2(x, y + 1, c);
	}
	if (arrrg[x + 1][y] == c && checkrg[x + 1][y] == 0 && x != n - 1) {
		dfs2(x + 1, y, c);
	}
	if (arrrg[x][y - 1] == c && checkrg[x][y - 1] == 0 && y != 0) {
		dfs2(x, y - 1, c);
	}
	if (arrrg[x - 1][y] == c && checkrg[x - 1][y] == 0 && x != 0) {
		dfs2(x - 1, y, c);
	}
}