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
	char num[1024];
	int sum = 0;
	int n;
	cin >> n;
	cin >> num;
	for (int i = 0; i < n; i++) {
		sum += num[i] - '0';
	}
	cout << sum;
}