#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a = 0;
		int b = 0;
		cin >> a >> b;
		cout << a + b << '\n';
	}
		
	return 0;
}