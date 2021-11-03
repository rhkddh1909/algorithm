#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int front = 100000 / 2 - 1;
	int back = 100000 / 2;
	int deque[100000];
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		string cmd;
		cin >> cmd;

		if (cmd == "push_back") {
			int b;
			cin >> b;
			deque[back] = b;
			back++;
		}
		else if (cmd == "push_front") {
			int b;
			cin >> b;
			deque[front] = b;
			front--;
		}
		else if (cmd == "pop_back") {
			if ((back - front) == 1) {
				cout << "-1\n";
			}
			else {
				cout << deque[back - 1] << '\n';
				deque[back - 1] = 0;
				back--;
			}
		}
		else if (cmd == "pop_front") {
			if ((back - front) == 1) {
				cout << "-1\n";
			}
			else {
				cout << deque[front + 1] << '\n';
				deque[front + 1] = 0;
				front++;
			}
		}
		else if (cmd == "front") {
			if ((back - front) == 1) {
				cout << "-1\n";
			}
			else {
				cout << deque[front + 1] << '\n';
			}
		}
		else if (cmd == "back") {
			if ((back - front) == 1) {
				cout << "-1\n";
			}
			else {
				cout << deque[back - 1] << '\n';
			}
		}
		else if (cmd == "size") {
			cout << back - front - 1 << '\n';
		}
		else if (cmd == "empty") {
			if ((back - front) == 1) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
	}
}