
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x,y,n;
	cin >> n;
	
	pair<int, int> *arr = new pair<int, int>[n];
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		arr[i] = make_pair(x, y);
	}
	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		cout << arr[i].first << ' ' << arr[i].second << '\n';
	}
}