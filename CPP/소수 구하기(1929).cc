#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, n;
	cin >> m >> n;
	bool *c = new bool[n + 1];
	for (int i = 1; i < n + 1; i++) {
		if (i == 1) {
			c[i] = true;
		}
		else {
			c[i] = false;
		}
	}

	for (int i = 2; i <= n; i++) {
		if (!(c[i])) {
			for (int j = i * 2; j <= n; j += i) {
				c[j] = true;
			}
		}
	}
	for (int i = m; i <= n; i++) {
		if (!(c[i])) {
			cout << i << '\n';
		}
	}
	delete[] c;
}
