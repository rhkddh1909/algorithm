#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool diff = false;
	int check = 0;
	int n, m;
	int arr[50][50];
	int temp[50][50];
	int x = 0, y = 0;
	cin >> n >> m;
	int times = 0;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < m; j++) {
			arr[i][j] = str[j] - '0';
		}
	}
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < m; j++) {
			temp[i][j] = str[j] - '0';
		}
	}
	if (n >= 3 && m>=3) {
		while(1){
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (arr[y + i][x + j] != temp[y + i][x + j]) {
						diff = true;
						break;
					}
				}
				if (diff) {
					break;
				}
			}
			if (diff) {
				diff = false;
				times++;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						arr[y+i][x+j] = (arr[y + i][x + j] ^ 1);
					}
				}
			}
			if (arr[y][x] != temp[y][x]) {
				times--;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						arr[y + i][x + j] = (arr[y + i][x + j] ^ 1);
					}
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (arr[i][j] == temp[i][j]) {
						check++;
					}
					else {
						check = 0;
						break;
					}
				}
				if (check == 0) {
					break;
				}
			}
			if (check == m * n) {
				cout << times;
				break;
			}
			else {
				if (x == m - 3 && y < n - 3) {
					x = 0;
					y++;
				}
				else if (x == m - 3 && y == n - 3) {
					cout << "-1";
					break;
				}
				else if(x <m-3){
					x++;
				}
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == temp[i][j]) {
					check++;
				}
				else {
					check = 0;
					break;
				}
			}
			if (check == 0) {
				break;
			}
		}
		if (check == n * m) {
			cout << '0';
		}
		else {
			cout << "-1";
		}
	}
}
