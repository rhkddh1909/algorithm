#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	struct admin {
		string name;
		int k;
		int e;
		int m;
	};

	int n;
	cin >> n;
	vector<admin> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].name >> v[i].k >> v[i].e >> v[i].m;
	}
	sort(v.begin(), v.end(), [](admin a, admin b) {
		if (a.k > b.k) {
			return true;
		}
		else if (a.k == b.k) {
			if (a.e < b.e) {
				return true;
			}
			else if (a.e == b.e) {
				if (a.m > b.m) {
					return true;
				}
				else if (a.m == b.m) {
					return a.name < b.name;
				}
			}
		}
		return false;
	});
	for (int i = 0; i < n; i++) {
		cout << v[i].name << '\n';
	}
}