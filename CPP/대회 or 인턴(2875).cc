#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

bool compare(pair<long long, long long> a, pair<long long, long long> b) {
	return a.second < b.second;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, k;
	cin >> n >> m >> k;

	if (k == m + n) {
		cout << '0';
	}
	else {
		while (1) {
			if (n > 2 * m) {
				k -= n - (2 * m);
				n -= n - (2 * m);
			}
			else if (n < 2 * m) {
				if (n % 2 == 0) {
					k -= ((m * 2) - n) / 2;
					m -= ((m * 2) - n) / 2;
				}
				else {
					k -= ((m * 2) - n) / 2;
					m -= ((m * 2) - n) / 2;
					n--;
					k--;
				}
			}
			else {
				if (k > 0) {
					k--;
					m--;
				}
				else {
					break;
				}
			}
		}
		cout << m;
	}
}