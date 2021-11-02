#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

bool compare(pair<long long, long long> a, pair<long long, long long> b) {
	return a.second < b.second;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int check;
	int sum = 1;


	int n;
	cin >> n;
	pair<long long, long long> *p = new pair<long long, long long>[n];
	for (int i = 0; i < n; i++) {
		int temp1, temp2;
		cin >> temp1 >> temp2;

		p[i] = make_pair(temp1, temp2);
	}
	sort(p, p + n);
	sort(p, p + n, compare);
	
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			check = p[i].second;
		}
		if (check <= p[i + 1].first) {
			check = p[i + 1].second;
			sum++;
		}
	}
	cout << sum;
	delete[] p;
}