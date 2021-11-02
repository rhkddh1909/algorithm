#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n = 0;
	
	cin >> n;
	
	int height[50] = { 0, };
	int weight[50] = { 0, };
	int rnk[50] = {0,};

	for (int i = 0; i < n; i++) {
		rnk[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		cin >> height[i] >> weight[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (height[i] < height[j] && weight[i] < weight[j]) {
				rnk[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rnk[i] << ' ';
	}

	return 0;
}