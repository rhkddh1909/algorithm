#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char str[600000];
	int cmd;

	stack<char> l;
	stack<char> r;
	cin >> str;
	cin >> cmd;
	for (int i = 0; str[i]; i++) {
		l.push(str[i]);
	}
	for (int j = 0; j < cmd; j++) {
		char a;
		cin >> a;
		switch (a) {
		case 'L':
			if (l.empty()) {
				break;
			}
			else {
				r.push(l.top());
				l.pop();
			}
			break;
		case 'D':
			if (r.empty()) {
				break;
			}
			else {
				l.push(r.top());
				r.pop();
			}
			break;
		case 'B':
			if (!(l.empty()))
				l.pop();
			break;
		case 'P':
			char ch;
			cin >> ch;
			l.push(ch);
			break;
		}
	}
	while (!(l.empty())) {
		r.push(l.top());
		l.pop();
	}
	while (!(r.empty())) {
		cout << r.top();
		r.pop();
	}
}
