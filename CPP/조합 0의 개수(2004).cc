
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	long long cnt2 = 0, cnt5 = 0;
	for (long long i = 2; i <= n; i *= 2) {
		cnt2 = cnt2 + (n / i);
	}
	for (long long i = 2; i <= n; i *= 2) {
		cnt2 = cnt2 - (m / i);
	}
	for (long long i = 2; i <= n; i *= 2) {
		cnt2 = cnt2 -((n - m) / i);
	}

	for (long long i = 5; i <= n; i *= 5) {
		cnt5 = cnt5 + (n / i);
	}
	for (long long i = 5; i <= n; i *= 5) {
		cnt5 = cnt5 - (m / i);
	}
	for (long long i = 5; i <= n; i *= 5) {
		cnt5 = cnt5 - ((n - m) / i);
	}
	cout << min(cnt2, cnt5);
}