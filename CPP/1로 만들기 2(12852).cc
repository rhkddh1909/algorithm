#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int *dp = new int[1000001];
	int *list = new int[1000001];
	int n;
	cin >> n;
	dp[0] = 0;
	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;
	list[0] = 1;
	list[1] = 1;
	list[2] = 1;
	list[3] = 1;


	for (int i = 4; i <= n; i++) {
		int answer1 = 0;
		int answer2 = 0;
		int answer3 = 0;

		if (i % 3 == 0) {
			answer3 = dp[i / 3] + 1;

		}
		else {
			answer3 = 1000000;
		}
		if (i % 2 == 0) {
			answer2 = dp[i / 2] + 1;
		}
		else {
			answer2 = 1000000;
		}
		answer1 = dp[i - 1] + 1;

		if (answer1 > answer2) {
			if(answer2 > answer3){
				list[i] = i/3;
				dp[i] = answer3;
			}
			else {
				list[i] = i / 2;
				dp[i] = answer2;
			}
		}
		else {
			if (answer1 > answer3) {
				list[i] = i / 3;
				dp[i] = answer3;
			}
			else {
				list[i] = i - 1;
				dp[i] = answer1;
			}
		}
	}

	cout << dp[n] << '\n';
	cout << n << ' ';

	int i = n;

	while (i > 1) {
		cout << list[i] << ' ';
		i = list[i];
	}


	return 0;
} 
