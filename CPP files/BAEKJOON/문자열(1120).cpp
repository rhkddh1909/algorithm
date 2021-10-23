#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string x;
string y;
int minnum = 9999;

int fdiff(int a, int b) {
	int diff = 0;
	for (int i = 0; i < x.length()-b; i++) {
		if (x[i+b] != y[i+a]) {
			diff++;
		}
	}

	return diff+b;
}

int ffind(int a) {
	
	for (int i = a; i < y.length() - x.length() + a + 1; i++) {
		if (x[a] == y[i]) {
			minnum = min(minnum, fdiff(i, a));
		}
	}

	return minnum;
}

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int diff = 9999;

	cin >> x;
	cin >> y;

	for (int i = 0; i < x.length(); i++) {
		diff = ffind(i);
	}

	if (diff == 9999) {
		diff = x.length();
	}

	cout << diff;

	return 0;
}
