#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	int a = 0;
	int b = 0;
	while(cin >> a >> b) {

		if (a == 0 && b == 0)
			break;
		cout << a + b << '\n';
	}
		
	return 0;
}