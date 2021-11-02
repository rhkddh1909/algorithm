#include<iostream>
#include<queue>
#include<algorithm>

#define INF -1

using namespace std;

int solution(int startpos, int x, int n, vector<vector<pair<int, int>>> time);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	int n, m, x;
	cin >> n >> m >> x;
	vector<int> dist;
	vector<vector<pair<int, int>>> time(n+1);
	for (int i = 0; i < m; i++) {
		int s, f, w;
		cin >> s >> f >> w;
		time[s].push_back(make_pair(f,w));
	}
	for (int i = 0; i <= n; i++) {
		if (i == x) {
			dist.push_back(0);
			pq.push(make_pair(0, x));
		}
		else {
			dist.push_back(INF);
		}
	}
	while (!pq.empty()) {
		int start = pq.top().second;
		int sumtime = pq.top().first;
		for (int i = 0; i < time[start].size(); i++) {
			if (dist[time[start][i].first] == INF) {
				dist[time[start][i].first] = time[start][i].second + sumtime;
				pq.push(make_pair(dist[time[start][i].first], time[start][i].first));
			}
			else if (time[start][i].second + sumtime < dist[time[start][i].first]) {
				dist[time[start][i].first] = time[start][i].second + sumtime;
				pq.push(make_pair(dist[time[start][i].first], time[start][i].first));
			}
		}
		pq.pop();
	}
	int maxnum = 0;
	for (int i = 1; i <= n; i++) {
		dist[i] += solution(i,x,n,time);
		maxnum = max(maxnum, dist[i]);
	}
	cout << maxnum;

	return 0;
}
int solution(int startpos, int x, int n, vector<vector<pair<int,int>>> time) {
	vector<int> dist;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;;
	for (int i = 0; i <= n; i++) {
		if (i == startpos) {
			dist.push_back(0);
			pq.push(make_pair(0, startpos));
		}
		else {
			dist.push_back(INF);
		}
	}
	while (!pq.empty()) {
		int start = pq.top().second;
		int sumtime = pq.top().first;
		for (int i = 0; i < time[start].size(); i++) {
			if (dist[time[start][i].first] == INF) {
				dist[time[start][i].first] = time[start][i].second + sumtime;
				pq.push(make_pair(dist[time[start][i].first], time[start][i].first));
			}
			else if (time[start][i].second + sumtime < dist[time[start][i].first]) {
				dist[time[start][i].first] = time[start][i].second + sumtime;
				pq.push(make_pair(dist[time[start][i].first], time[start][i].first));
			}
		}
		pq.pop();
	}
		
	

	return dist[x];
}
