#include<iostream>
#include<queue>
#include<algorithm>

#define INF -1

using namespace std;

bool desc(pair<long long, long long> &a, pair<long long, long long> &b) {
	return a.second < b.second;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;
	long long n, m;
	cin >> n >> m;
	vector<long long> value;
	vector<vector<pair<long long, long long>>> bus(m+1);
	for (int i = 0; i < m; i++) {
		long long s, f, c;
		cin >> s >> f >> c;
		bus[s].push_back(make_pair(f, c));
	}
	long long a, b;
	cin >> a >> b;
	for (int i = 0; i <= n; i++) {
		if (i == a) {
			pq.push(make_pair(0,a));
			value.push_back(0);
		}
		else {
			value.push_back(INF);
		}
	}

	while (!pq.empty()) {
		if (pq.top().second != b) {
			sort(bus[pq.top().second].begin(), bus[pq.top().second].end(), desc);
			for (int i = 0; i < bus[pq.top().second].size(); i++) {
				if (value[bus[pq.top().second][i].first] == INF) {
					value[bus[pq.top().second][i].first] = pq.top().first + bus[pq.top().second][i].second;
					pq.push(make_pair(value[bus[pq.top().second][i].first], bus[pq.top().second][i].first));
				}
				else if (value[bus[pq.top().second][i].first] > pq.top().first + bus[pq.top().second][i].second) {
					value[bus[pq.top().second][i].first] = pq.top().first + bus[pq.top().second][i].second;
					pq.push(make_pair(value[bus[pq.top().second][i].first], bus[pq.top().second][i].first));
					if (bus[pq.top().second][i].first == b) {
						break;
					}
				}
				else {
					if (bus[pq.top().second][i].first == b) {
						break;
					}
				}
			}
			bus[pq.top().second].clear();
			pq.pop();
		}
		else {
			break;
		}
	}

	cout << value[b];

	return 0;
}