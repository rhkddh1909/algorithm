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
	
	long long n, m;
	int sum = 1;
	cin >> n >> m;
	
	if (n == 1 || m == 1) {
		cout << '1';
	}
	else if (n == 2) {
		if (m < 9) {
			if (m % 2 == 0) {
				cout << (m / 2);
			}
			else {
				cout << (m / 2) + 1;
			}
		}
		else {
			cout << '4';
		}
	}
	else if (n >= 3) {
		if (m <= 4) {
			cout << m;
		}
		else if (m > 4 && m < 7) {
			cout << '4';
		}
		else {
			cout << m - 2;
		}
	}
}
