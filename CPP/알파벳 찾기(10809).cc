#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int arr[26] = {};
	char str[101];
	cin >> str;
	for (int j = 0; j < 26; j++) {
		if (arr[j] == 0)
			arr[j]--;
	}
	for (int i = 0; str[i]; i++) {
		if (arr[(str[i] - '0') % 49] == -1) {
			arr[(str[i] - '0') % 49] = i;
		}
	}
	for (int j = 0; j < 26; j++) {
		cout << arr[j] << ' ';
	}
}