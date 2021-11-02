#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

void dfs(int start, int need, string ans, pair<int, int> p);

int l, c;
vector<string> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	cin >> l >> c;
	
	for (int i = 0; i < c; i++) {
		string temp;
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	if (l == c) {
		for (int i = 0; i <l; i++) {
			cout << v[i];
		}
		cout << '\n';
	}
	else {
		string ans = "";
		for (int i = 0; i <= c - l; i++) {
			pair<int, int> p(0, 0);
			dfs(i, l, ans, p);
		}
	}

	return 0;
}

void dfs(int start, int need, string ans, pair<int, int> p) {
	ans += v[start];
	int a = v[start][0] - 'a';
	if (a == 0 || a == 4 || a == 8 || a == 14 || a == 20) {
		p.first++;
	}
	else {
		p.second++;
	}
	need--;
	if (need == 0) {
		if (p.first >=1 && p.second >= 2) {
			cout << ans << '\n';
		}
		return;
	}
	else {
		for (int i = start + 1; i < c; i++) {
			if (c - i >= need) {
				dfs(i, need, ans, p);
			}
		}
	}
}