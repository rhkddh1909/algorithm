#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main()
{
	vector<pair<int,int>> q;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			q.push_back(make_pair(temp, j));
		}
		int count = 0;
		while (q.size() != 0) {
			int check = 0;
			for (int j = 1; j < q.size(); j++) {
				if (q[0].first < q[j].first) {
					q.push_back(q[0]);
					q.erase(q.begin());
					check = 1;
					break;
				}
			}
			if (check == 0) {
				count++;
				if (q.front().second == m) {
					cout << count << '\n';
				}
				q.erase(q.begin());
			}
		}
	}

	return 0;
}
