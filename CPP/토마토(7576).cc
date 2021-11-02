#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
void func();
int day = 0;
int n, m;
int fail = 0;
int complete = 0;
vector<int> *a = new vector<int>[1000000];
int **arr;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> m >> n;

	arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				a[day].push_back(i*(m) + j);
			}
			else if (arr[i][j] == 0) {
				complete = 1;
			}
		}
	}
	while (1) {
		if (complete == 0) {
			break;
		}
		func();
		if (a[day+1].size() == 0) {
			break;
		}
		day++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				fail = 1;
				break;
			}
		}
		if (fail) {
			day = -1;
			break;
		}
	}
	cout << day;
	delete[] a;
	delete[] *arr;
}
void func() {
	for (int i = 0; i < a[day].size(); i++) {
		int y = a[day][i] / (m);
		int x = a[day][i] % (m);
			if (y != 0 && arr[y - 1][x] == 0) {
				arr[y - 1][x] = 1;
				a[day + 1].push_back((y - 1)*(m) + x);
			}
			if (y != n-1 && arr[y + 1][x] == 0) {
				arr[y + 1][x] = 1;
				a[day + 1].push_back((y + 1)*(m ) + x);
			}
			if (x != 0 && arr[y][x - 1] == 0) {
				arr[y][x-1] = 1;
				a[day + 1].push_back((y)*(m ) + (x-1));
			}
			if (x != m-1 && arr[y][x + 1] == 0) {
				arr[y][x+1] = 1;
				a[day + 1].push_back((y)*(m ) + (x+1));
			}
	}
	
}