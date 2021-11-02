#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char str[51];
	
	int t;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> str;
		stack<char> stack;
		int end = 0;
		for (int j = 0; str[j]; j++) {
			if (str[j] == '(') {
				stack.push(str[j]);
			}
			else if (str[j] == ')') {
				if (stack.empty()) {
					cout << "NO\n";
					end = 1;
					break;
				}
				else {
					stack.pop();
				}
			}
		}
		if (stack.empty() && end == 0) {
			cout << "YES\n";
		}
		else if (stack.size()){
			cout << "NO\n";
		}
	}
}
