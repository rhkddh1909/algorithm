#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> q;
	int n, m;
	cin >> n >> m;
	if (n < m) {
		m = m % n;
	}
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	int k = m;
	cout << "<";
	while (!(q.empty())) {
		if (k > 1) {
			q.push(q.front());
			q.pop();
			k--;
		}
		else {
			if (q.size() == 1)
				cout << q.front() << ">";
			else
				cout << q.front() << ", ";
			q.pop();
			k = m;
		}
	}
}
