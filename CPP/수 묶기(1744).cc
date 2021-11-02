#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

bool compare(pair<long long, long long> a, pair<long long, long long> b) {
	return a.second < b.second;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> plus;
	vector<int> minus;
	int n;
	int sum = 0;
	bool check = false;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (temp < 0) {
			minus.push_back(temp);
		}
		else if (temp > 0) {
			plus.push_back(temp);
		}
		else {
			check = true;
		}
	}
	sort(plus.begin(), plus.end(), greater<int>());
	sort(minus.begin(), minus.end());
	if (plus.size() % 2 == 0) {
		for (int i = 0; i < plus.size(); i += 2) {
			sum += max((plus[i] * (plus[i + 1])), plus[i] + plus[i + 1]);
		}
	}
	else {
		for (int i = 0; i < plus.size()-1; i += 2) {
			sum += max((plus[i] * (plus[i + 1])), plus[i]+ plus[i+1]);
		}
		sum += plus[plus.size() - 1];
	}
	if (minus.size() % 2 == 0) {
		for (int i = 0; i < minus.size(); i += 2) {
			sum += max((minus[i] * (minus[i + 1])), minus[i] + minus[i + 1]);
		}
	}
	else {
		for (int i = 0; i < minus.size()-1; i += 2) {
			sum += max((minus[i] * (minus[i + 1])), minus[i]+ minus[i+1]);
		}
		if (check) {
			sum += minus[minus.size() - 1]*0;
		}
		else {
			sum += minus[minus.size() - 1];
		}
	}
	cout << sum;
}