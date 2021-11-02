#include<iostream>
#include<queue>
#include<algorithm>

#define INF 200000000

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int v, e, k;
	cin >> v >> e >> k;
	vector<int> dist;
	vector<vector<pair<int, int>>> g(v + 1);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
		
	
	for (int i = 0; i <= v; i++) {
		if (i == k) {
			dist.push_back(0);
			q.push(make_pair(0,k));
		}
		else {
			dist.push_back(INF);
		}
	}
	for (int i = 0; i < e; i++) {
		int ts, td, tw;
		cin >> ts >> td >> tw;
		g[ts].push_back(make_pair(td, tw));
	}

	while (!q.empty()) {
		for (int i = 0; i < g[q.top().second].size(); i++) {
			if (g[q.top().second][i].second + q.top().first <= dist[g[q.top().second][i].first]) {
				dist[g[q.top().second][i].first] = g[q.top().second][i].second + q.top().first;
				q.push(make_pair(dist[g[q.top().second][i].first], g[q.top().second][i].first));
			}
		}
		q.pop();
	}

	for (int i = 1; i <= v; i++) {
		if (dist[i] == INF) {
			cout << "INF" << '\n';
		}
		else {
			cout << dist[i] << '\n';
		}
	}

	return 0;
}