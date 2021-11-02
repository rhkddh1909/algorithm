#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int arr[40001] = { 0, };
	int lis[40001] = { 0, };
	int n, lsize = 1;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	lis[1] = arr[1];
	int temp;
	for (int i = 2; i <= n; i++) {
		if (lis[lsize] < arr[i]) {
			lsize++;
			lis[lsize] = arr[i];
		}
		else {
			temp = lower_bound(lis + 1, lis + lsize + 1, arr[i]) - lis;
			lis[temp] = arr[i];
		}
	}

	cout << lsize;
	
	return 0;
}