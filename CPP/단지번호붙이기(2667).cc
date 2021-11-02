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
vector<int> a[650];
int check[650];
vector<int> num;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int arr[25][25];
	cin >> n;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < n; j++) {
			arr[i][j] = temp[j]-'0';
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) {
				a[n * i + j].push_back(n * i + j);
				if (i != 0) {
					if (arr[i - 1][j] == 1) {
						a[n * i + j].push_back((n * (i - 1)) + j);
					}
				}
				if (i != n-1) {
					if (arr[i + 1][j] == 1) {
						a[n * i + j].push_back((n * (i + 1)) + j);
					}
				}
				if (j != 0) {
					if (arr[i][j-1] == 1) {
						a[n * i + j].push_back((n * i)  + (j-1));
					}
				}
				if (j != n-1) {
					if (arr[i][j+1] == 1) {
						a[n * i + j].push_back((n * i) + (j+1));
					}
				}
			}
		}
	}

	for (int i = 0; i < n*n; i++) {
		if (a[i].size() >0) {
			if (check[i] != 1) {
				dfs(i);
				num.push_back(cnt);
				cnt = 0;
			}
		}
	}
	sort(num.begin(), num.end());
	cout << num.size() << '\n';
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << '\n';
	}
}
void dfs(int start) {
	check[start] = 1;
	cnt++;
	for (int i = 0; i < a[start].size(); i++) {
		int end = a[start][i];
		if (check[end] != 1) {
			dfs(end);
		}
	}
}