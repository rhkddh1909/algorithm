#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int r = 1;
	int a;
	cin >> a;
	for (int i = 1; i < a; i++) {
		r += 2;
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < r/2+1; j++) {
			if (r / 2 - i <= j && r / 2 + i >= j) {
				cout << '*';
			}
			else if (r / 2 - i > j) {
				cout << ' ';
			}
		}
			cout << '\n';	
	}
	for (int i = r - a -1; i >= 0; i--) {
		for (int j = 0; j < r/2+1; j++) {
			if (r / 2 - i <= j && r / 2 + i >= j) {
				cout << '*';
			}
			else if (r / 2 - i > j) {
				cout << ' ';
			}
		}
		if (i != 0) {
			cout << '\n';
		}

	}
}
