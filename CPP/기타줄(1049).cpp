#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int six[50] = { 0, };
int one[50] = { 0, };

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> six[i] >> one[i];
	}

	sort(six, six + m);
	sort(one, one + m);
	
	if (six[0] >= one[0] * 6) {
		cout << one[0] * n;
	}
	else {
		int sum = six[0]*(n / 6);
		int temp = n % 6;
		if (six[0] <= temp*one[0]) {
			sum += six[0];
		}
		else {
			sum += temp*one[0];
		}
		cout << sum;
	}

	return 0;
}
