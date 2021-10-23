#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, value;
	cin >> n;

	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {
		cin >> value;
		v[i] = make_pair(value, i);
	}
	stable_sort(v.begin(), v.end());
	int maxnum = 0;
	for (int i = 0; i < n; i++) {
			maxnum = max(maxnum, ((v[i].second - i) + 1));
	}
	cout << maxnum;
}
