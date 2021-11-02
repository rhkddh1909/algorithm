#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
void dfs(int);
void select(int);
int find(int);
int step = 0;
int ans = 0;
int n;
int num = 1;

int arr[100][100];

vector<int> b[10000];

int check[10000];
int map[100][100];
int fmap[100][100];
int length = 10000;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			fmap[i][j] = 0;
			check[i*n + j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) {
				b[i*n + j].push_back(i*n + j);
				if (i != 0) {
					if (arr[i - 1][j] == 1) {
						b[i*n + j].push_back((i - 1)*n + j);
					}
				}
				if (i != n - 1) {
					if (arr[i + 1][j] == 1) {
						b[i*n + j].push_back((i + 1)*n + j);
					}
				}
				if (j != 0) {
					if (arr[i][j - 1] == 1) {
						b[i*n + j].push_back((i)*n + (j - 1));
					}
				}
				if (j != n - 1) {
					if (arr[i][j + 1] == 1) {
						b[i*n + j].push_back((i)*n + (j + 1));
					}
				}
			}
		}
	}
	for (int i = 0; i < n*n; i++) {
		if (check[i] == 0 && arr[i / n][i%n] == 1) {
			dfs(i);
			num++;
		}
	}
	
	for (int i = 1; i < num-1; i++) {
		step = 0;
		ans = 0;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				map[j][k] = fmap[j][k];
			}
		}
		for (int j = 0; j < 10000; j++) {
			b[j].clear();
		}
		select(i);
		while (1) {
			if (find(i) != 0) {
				break;
			}
			step++;
		}
		length = min(length, ans);
	}
	cout << length;
}
void dfs(int start) {
	check[start] = 1;
	fmap[start / n][start%n] = num;
	for (int i = 0; i < b[start].size(); i++) {
		int end = b[start][i];
		if (check[end] == 0) {
			dfs(end);
		}
	}
}
int find(int island) {
	for (int i = 0; i < b[step].size(); i++) {
		int y = b[step][i] / n;
		int x = b[step][i] % n;
		if (y != 0) {
			if (map[y - 1][x] == 0) {
				b[step + 1].push_back((y - 1)*n + x);
				map[y - 1][x] = island;
			}
			else if (map[y - 1][x] > island) {
				ans = step;
				break;
			}
		}
		if (y != n - 1) {
			if (map[y + 1][x] == 0) {
				b[step + 1].push_back((y + 1)*n + x);
				map[y + 1][x] = island;
			}
			else if (map[y + 1][x] > island) {
				ans = step;
				break;
			}
		}
		if (x != 0) {
			if (map[y][x - 1] == 0) {
				b[step + 1].push_back((y)*n + (x - 1));
				map[y][x - 1] = island;
			}
			else if (map[y][x - 1] > island) {
				ans = step;
				break;
			}
		}
		if (x != n - 1) {
			if (map[y][x + 1] == 0) {
				b[step + 1].push_back((y)*n + (x + 1));
				map[y][x + 1] = island;
			}
			else if (map[y][x + 1] > island) {
				ans = step;
				break;
			}
		}
	}
	return ans;
}
void select(int island) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == island) {
				if (i != 0) {
					if (map[i - 1][j] == 0) {
						b[step].push_back((i)*n + j);
					}
				}
				if (i != n - 1) {
					if (map[i + 1][j] == 0) {
						b[step].push_back((i)*n + j);
					}
				}
				if (j != 0) {
					if (map[i][j - 1] == 0) {
						b[step].push_back((i)*n + (j));
					}
				}
				if (j != n - 1) {
					if (map[i][j + 1] == 0) {
						b[step].push_back((i)*n + (j));
					}
				}
			}
		}
	}
}