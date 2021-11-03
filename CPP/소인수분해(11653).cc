#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	bool *c = new bool[n+1];
	
	for (int i = 2; i < n+1; i++) {
		c[i] = false;
	}
	for (int i = 2; i*i <= n; i++) {
		if (!(c[i])) {
			for (int j = i * i; j <= n; j = j + i) {
				c[j] = true;
			}
		}
	}
	int i = 2;
	
	while (1) {
		if (n == 1 || n == 0) {
			break;
		}
		if (n%i == 0 && c[i] == false) {
			n = n / i;
			cout << i << '\n';
			i = 2;
		}
		else {
			i++;
		}
	}
}