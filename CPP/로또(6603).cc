#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void dfs(int i);

int arr[13];
int ans[6];
int length;
int num = 0;

int main() {
	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	while (1) {
		
		cin >> length;

		if (length == 0) {
			break;
		}
		for (int i=0; i < length; i++) {
			cin >> arr[i];
		}
		dfs(0);
		cout << '\n';
	}

	return 0;
}

void dfs(int i) {
	if (num == 6) {
		for (int i = 0; i < 6; i++) {
			cout << ans[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int k = i; k < 2*length - k; k++) {
			ans[num] = arr[k];
			num++;
			dfs(k+1);
			num--;
		}
	}
}