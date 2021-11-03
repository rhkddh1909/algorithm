#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std; \


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	long* hi = new long[n];
	long* ai = new long[n];
	long answer = 0;;
	vector<pair<long, long>> v;
	for (int i = 0; i < n; i++) {
		cin >> hi[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> ai[i];
		pair<long, long> p;
		p.first = ai[i];
		p.second = i;
		v.push_back(p);
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < n; i++) {
		answer += hi[v.front().second] + (ai[v.front().second] * i);
		v.erase(v.begin());
	}

	cout << answer;

	return 0;
}