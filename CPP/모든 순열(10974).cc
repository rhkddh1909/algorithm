#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int n, a[8], b[8], v[8] = { 0 };
void fun(int cnt) {
	if (cnt == n) {
		for (int i = 0; i < n; i++) cout << b[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		if (v[i]) continue;
		v[i] = 1;
		b[cnt] = a[i];
		fun(cnt + 1);
		v[i] = 0;
	}
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	
	for (int i = 0; i < n; i++) a[i] = i + 1;
	
	fun(0);
}