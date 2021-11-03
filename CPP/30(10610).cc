#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin >> str;
	vector<int> v;
	int check = 0;
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0') {
			check++;
		}
	}
	if (check != 0) {
		for (int i = 0; i < str.length(); i++) {
			sum += str[i] - '0';
			v.push_back(str[i] - '0');
		}
		if (sum % 3 == 0) {
			sort(v.begin(), v.end(),greater<int>());
			for (int i = 0; i < v.size(); i++) {
				cout << v[i];
			}
		}
		else {
			cout << "-1";
		}
	}
	else {
		cout << "-1";
	}
}
