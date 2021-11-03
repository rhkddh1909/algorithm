#include <iostream>
#include <vector>
using namespace std;

void findParent(int);

vector<int> v[100001];
int parent[100001];
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



	int n;
	cin >> n;
	int pos = 1;
	for (int i = 0; i < n-1; i++) {
		int temp1, temp2;
		cin >> temp1>>temp2;
		v[temp1].push_back(temp2);
		v[temp2].push_back(temp1);
	}	
	findParent(pos);
	for (int i = 2; i <= n; i++) {
		cout << parent[i] << '\n';
	}
}
void findParent(int pos) {
	for (int i = 0; i < v[pos].size(); i++) {
		if (v[pos][i] != parent[pos]) {
			parent[v[pos][i]] = pos;
			findParent(v[pos][i]);
		}
	}
}