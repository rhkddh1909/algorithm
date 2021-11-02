#include <iostream>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

int bfs(int, int);

int check[500000];

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;

	cin >> n >> k;

	cout << bfs(n, k);

	return 0;
}

int bfs(int start, int end) {
	int ans;
	queue<pair<int, int>> q;
	q.push(make_pair(start, 0));
	while (!q.empty()) {
		pair<int, int> step = q.front();

		if (step.first == end) {
			ans = step.second;
			break;
		}

		q.pop();

		//cout << step.first << " " << step.second << '\n';

		if (step.first == 0) {
			q.push(make_pair(step.first + 1, step.second + 1));
			check[step.first + 1] = 1;
		}
		else if (step.first > end) {
			q.push(make_pair(step.first - 1, step.second + 1));
			check[step.first - 1] = 1;
		}
		else {
			if (check[step.first + 1] != 1) {
				q.push(make_pair(step.first + 1, step.second + 1));
				check[step.first + 1] = 1;
			}
			if (check[step.first * 2] != 1) {
				q.push(make_pair(step.first * 2, step.second + 1));
				check[step.first * 2] = 1;
			}
			if (check[step.first - 1] != 1) {
				q.push(make_pair(step.first - 1, step.second + 1));
				check[step.first - 1] = 1;
			}
		}
	}

	return ans;
}