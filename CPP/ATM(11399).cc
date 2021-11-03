#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

bool compare(pair<long long, long long> a, pair<long long, long long> b) {
	return a.second < b.second;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);

	int sum = 0;
	int temp = 0;
	for (int i = 0; i < n; i++) {
		temp += arr[i];
		sum += temp;
	}
	cout << sum;
}