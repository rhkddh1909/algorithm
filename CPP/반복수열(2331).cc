#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
void dfs(int, int);
int check[300000];
pair<int, long long> arr[300000];
int cnt = 0;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, p;
	cin >> a >> p;

	
	dfs(a, p);
}
void dfs(int a, int p) {
	check[a] = 1;
	int temp = a;
	int newa = 0;
	while (1) {
		newa += pow(temp % 10, p);
		temp = temp / 10;
		if (temp / 10 == 0) {
			newa += pow(temp % 10, p);
			break;
		}
	}
	arr[a] = make_pair(a, cnt);
	cnt++;
	if (check[newa] != 1) {
		dfs(newa, p);
	}
	else {
		cout << arr[newa].second;
	}
}