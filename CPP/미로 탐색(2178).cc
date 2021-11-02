#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
void bfs(int);
int ans = 0;
int n, m;
vector<int> a[10000];
int check[10000];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;

	int arr[100][100];
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < m; j++) {
			arr[i][j] = temp[j] - '0';
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 1) {
				check[i * m + j] = 0;
				if (i != 0) {
					if (arr[i - 1][j] == 1) {
						a[i * m + j].push_back((i - 1)*m + j);
					}
				}
				if (i != n - 1) {
					if (arr[i + 1][j] == 1) {
						a[i * m + j].push_back((i + 1)*m + j);
					}
				}
				if (j != 0) {
					if (arr[i][j - 1] == 1) {
						a[i * m + j].push_back((i)*m + j - 1);
					}
				}
				if (j != m - 1) {
					if (arr[i][j + 1] == 1) {
						a[i * m + j].push_back((i)*m + j + 1);
					}
				}
			}

		}
	}
	check[0] = 1;
	bfs(0);
	cout << check[n*m-1];
}
void bfs(int start) {
	queue<int> q;
	q.push(start);
	while (!q.empty()) {
		int start = q.front();
		q.pop();
		for (int i = 0; i < a[start].size(); i++) {
			int end = a[start][i];
			if (check[end] == 0) {	
				check[end] = check[start]+1;
				if (end != (n*m - 1)) {	
					q.push(end);
				}
			}
		}
	}
}