#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n = 0;
	int cnt = 1;
	cin >> n;
	if (n == 1) {
		cout << cnt;
	}
	else{
		while (1) {
			if (n % 2 == 0) {
				n = n / 2;
			}
			else {
				n = (3*n) + 1;
			}
			cnt++;
			if (n == 1) {
				cout << cnt;
				break;
			}
		}
	}
	return 0;
}