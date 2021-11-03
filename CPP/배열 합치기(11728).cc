#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;
int cmp(const void *a, const void* b) {
	int x = *(int*)a;
	int y = *(int*)b;
	if (x < y) {
		return -1;
	}
	else if (x > y) {
		return 1;
	}
	else {
		return 0;
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int *arr = new int[n + m];
	for (int i = 0; i < n + m; i++) {
		cin >> arr[i];
	}
	qsort(arr, n+m, sizeof(int), cmp);

	for (int i = 0; i < n + m; i++) {
		cout << arr[i] << ' ';
	}
}
