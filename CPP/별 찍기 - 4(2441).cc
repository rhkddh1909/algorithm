#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a;
	cin >> a;
	
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (j < i) {
				cout << ' ';
			}
			else {
				cout << "*";
			}
		}
		cout << '\n';
	}
}