#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
void dfs(int);
int check[100001];
int a[100001];
int ans = 0;
vector<int> arr(100001);
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	int n;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		ans = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
			check[i] = 0;
		}
		for (int i = 1; i <= n; i++) {
			arr.clear();
			if (check[i] != 1) {
				dfs(i);
			}
		}
		cout << ans<< '\n';
	}
}
void dfs(int start) {
	check[start] = 1;
	arr.push_back(start);
	if (check[a[start]]== 0) {
		dfs(a[start]);
	}
	else {
		for (int i = 0; i < arr.size(); i++) {
			if (a[start] == arr[i]) {
				
				break;
			}
			ans ++;
		}
		
	}
}