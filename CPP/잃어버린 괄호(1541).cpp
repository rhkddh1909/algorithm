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
	
	char c[50];
	cin >> c;
	string temp;
	bool check = true;
	int pos = 0;
	int plus = 0, minus = 0;
	for (int i = 0; c[i]; i++) {
		if (c[i] - '0' <= 9 && 0 <= c[i] - '0') {
			temp[pos] = c[i];
			pos++;
		}
		else {
			pos = 0;
			if (check) {
				plus += stoi(temp);
			}
			else {
				minus += stoi(temp);
			}
			if (c[i] == '-') {
				check = false;
			}
			for (int j = 0; j < 5; j++) {
				temp[j] = 0;
			}
			temp.clear();
		}
	}
	if (check) {
		plus += stoi(temp);
	}
	else {
		minus += stoi(temp);
	}
	cout << plus - minus;
}
