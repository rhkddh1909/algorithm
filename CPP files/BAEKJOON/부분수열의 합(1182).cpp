#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int ans = 0;
int s;

void dfs(int pos, int num);


int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < n; i++) {
		dfs(i,0);
	}

	cout << ans;

	return 0;
}

void dfs(int pos, int num) {
	int start = pos;
	int sum = num + v[pos];
	if (sum == s) {
		ans++;
	}
	for (int i = start+1; i < v.size(); i++) {
		dfs(i, sum);
	}
}
