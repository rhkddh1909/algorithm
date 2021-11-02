#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	bool c[1000001];
	for (int i = 2; i < 1000001; i++) {
		c[i] = false;
	}
	for (int i = 2; i*i <= 1000000; i++) {
		if (!(c[i])) {
			for (int j = i * i; j <= 1000000; j = j + i) {
				c[j] = true;
			}
		}
	}
	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		
		if (n % 2 == 0 && n > 5) {
			for (int i = 3; i <= n; i++) {
				if (c[i] == false && c[n - i] == false) {
					printf("%d = %d + %d\n", n, i, n - i);
					break;
				}
			}
		}
	}
}


