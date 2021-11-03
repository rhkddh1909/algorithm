#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char str[100];
	int a = 0;
	cin >> str;
	for (int i = 0; str[i]; i++) {
		cout << str[i];
		a++;
		if(a/10 && a%10 == 0)
			cout << '\n';
	}
}