#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dia(int, int);
int check[100001];
vector<pair<int, int>> g[100001];
int ans = 0;
int last;
int main(void) {
	
	int v;
	cin >> v;

	for (int i = 0; i < v; i++) {
		int temp1;
		cin >> temp1;
		while (1) {
			int temp2, temp3;
			cin >> temp2;
			if (temp2 == -1) {
				break;
			}
			cin >> temp3;
			g[temp1].push_back(make_pair(temp2, temp3));
		}
	}
	dia(1, 0);
	
	for (int j = 1; j <= v; j++) {
		check[j] = 0;
	}
	int sum = ans;
	ans = 0;
	dia(last, 0);
	cout << ans;
}
void dia(int start, int sum) {
	check[start] = 1;
	int temp = sum;
	for (int i = 0; i < g[start].size(); i++) {
		if (check[g[start][i].first] == 0) {
			dia(g[start][i].first, temp+ g[start][i].second);
		}
	}
	ans = max(temp, ans);
	if (ans == temp) {
		last = start;
	}
}
