#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
void dfs(int);
int ans = 0;
int n;
int cnt;
vector<int> a[2500];
int check[2500];
vector<int> num;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int w, h;
	while (1) {
		cin >> w >> h;
		if (w == 0 && h == 0) {
			break;
		}
		cnt = 0;
		int arr[50][50];

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				a[i*w+j].clear();
				check[i*w + j]=0;
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (arr[i][j] == 1) {
					a[i * w + j].push_back(i * w + j);
					if (i != 0 && j != 0) {
						if (arr[i - 1][j - 1] == 1) {
							a[i * w + j].push_back((i - 1) * w + (j - 1));
						}
					}
					if (i != 0) {
						if (arr[i - 1][j] == 1) {
							a[i * w + j].push_back((i - 1) * w + (j));
						}
					}
					if (i != 0 && j != w - 1) {
						if (arr[i - 1][j + 1] == 1) {
							a[i * w + j].push_back((i - 1) * w + (j + 1));
						}
					}
					if (j != 0) {
						if (arr[i][j - 1] == 1) {
							a[i * w + j].push_back((i)* w + (j - 1));
						}
					}
					if (j != w - 1) {
						if (arr[i][j + 1] == 1) {
							a[i * w + j].push_back((i)* w + (j + 1));
						}
					}
					if (i != h - 1 && j != 0) {
						if (arr[i + 1][j - 1] == 1) {
							a[i * w + j].push_back((i + 1) * w + (j - 1));
						}
					}
					if (i != h - 1) {
						if (arr[i + 1][j] == 1) {
							a[i * w + j].push_back((i + 1) * w + (j));
						}
					}
					if (i != h - 1 && j != w - 1) {
						if (arr[i + 1][j + 1] == 1) {
							a[i * w + j].push_back((i + 1) * w + (j + 1));
						}
					}
				}
			}
		}
		for (int i = 0; i < h*w; i++) {
			if (a[i].size() > 0) {
				if (check[i] != 1) {
					cnt++;
					dfs(i);
					
				}
			}
		}
		cout << cnt << '\n';
	}
}
void dfs(int start) {
	check[start] = 1;
	for (int i = 0; i < a[start].size(); i++) {
		int end = a[start][i];
		if (check[end] != 1) {
			dfs(end);
		}
	}
}