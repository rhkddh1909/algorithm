#include <iostream>
#include <algorithm>

using namespace std;

int w[100001];
bool comp2(const int& a, const int& b) {
	return a > b;
}
int main(void) {

	ios::sync_with_stdio(false);

	cout.tie(NULL);
	cin.tie(NULL);
	
	int n;
	int best = 0;;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> w[i];
	}
	sort(w+1, w+n+1, comp2);
	int cnt = 0;
	int sum = 0;
	int mini = 10001;
	for (int i = 1; i <= n; i++) {
		cnt++;
		if (mini > w[i]) mini = w[i];
		if (cnt * mini > best) {
			best = cnt * mini;
		}
		if (w[i] > best) {
			best = w[i]; cnt = 1; mini = w[i];
		}
	}
	cout << best;
}
