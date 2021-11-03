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
	long long temp = 1;
	for (int i = n; i > 0; i--) {
		temp *= i;
	}
	cout << temp;
}
