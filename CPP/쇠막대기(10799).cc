#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char str[100000];
	int sum = 0;
	int flag = 1;
	stack<char> stack;
	cin >> str;
	for (int i = 0; str[i]; i++) {
		if (str[i] == '(') {
			stack.push(i);
		}
		else {
			stack.pop();
			if (str[i-1] == '(') {
				sum += stack.size();
			}
			else {
				sum++;
			}
		}
	}
	cout << sum;
}