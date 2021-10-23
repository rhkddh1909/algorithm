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
	
	int n, m, k;
	cin >> n >> m >> k;
	int start = 0;
	vector<int> v;
	if (m + k - 1 <= n && n <= m * k) {
		for (int i = 1; i <= n; i++) {
			v.push_back(i);
		}
		for (int i = 1; i <= m; i++) {
			int temp = min(start + k, n - m + i);

			reverse(v.begin() + start, v.begin() + temp);
			start = temp;
		}
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
		}
	}
	else {
		cout << "-1";
	}
	
}
