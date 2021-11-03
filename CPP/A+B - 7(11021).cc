#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int a,b,t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout <<"Case #"<<i+1<<": "<< a + b << '\n';
	}

	return 0;
}