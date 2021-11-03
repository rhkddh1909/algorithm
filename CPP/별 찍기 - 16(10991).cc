#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a;
	cin >> a;
	int flag;
	for (int i = 0; i < a; i++) {
		flag = 0;
		for (int j = 0; j < (a * 2) - 1; j++) {
			if (a - i -1 <= j) {
				if (flag) {
					cout << ' ';
					flag--;
				}
				else {
					cout << '*';
					flag++;
				}
			}
			else {
				cout << ' ';
			}
			if (j == a+i) {
				break;
			}
		}
		cout << '\n';
	}
}
