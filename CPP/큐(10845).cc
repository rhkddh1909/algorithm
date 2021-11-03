#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int front = 0;
	int back = 0;
	int queue[100000];
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int a;
			cin >> a;
			queue[back] = a;
			back++;
		}
		else if (cmd == "pop") {
			if (back == front) {
				cout << "-1" << '\n';
			}
			else {
				cout << queue[front] << '\n';
				queue[front] = 0;
				front++;
			}
		}
		else if (cmd == "back") {
			if (back == front) {
				cout << "-1" << '\n';
			}
			else {
				cout << queue[back - 1] << '\n';
			}
		}
		else if (cmd == "front") {
			if (back == front) {
				cout << "-1" << '\n';
			}
			else {
				cout << queue[front] << '\n';
			}
		}
		else if (cmd == "size") {
			cout << back - front << '\n';
		}
		else if (cmd == "empty") {
			if (back == front) {
				cout << "1" << '\n';
			}
			else {
				cout << "0" << '\n';
			}
		}
	}
}