#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <stack>
#include <string.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	for (int i = 0; i < 100; i++) {
		getline(cin, str);

		cout << str << '\n';
	}
}