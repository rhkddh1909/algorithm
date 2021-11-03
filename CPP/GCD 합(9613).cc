#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[100];
	int maxn;
	int t;
	int c;

	cin >> t;
	for (int k = 0; k < t; k++) {
		cin >> c;
		long long sum = 0;
		for (int i = 0; i < c; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < c-1; i++) {
			for (int j = i+1; j < c; j++) {
				int n = max(arr[i], arr[j]);
				int n2 = min(arr[i], arr[j]);
				for (int k = n2; k >0; k--) {
					if (n%k == 0 && n2%k == 0) {
						maxn = k;
						break;
					}
				}
				sum += maxn;
				maxn = 0;
			}
		}
		cout << sum << '\n';
	}
}
