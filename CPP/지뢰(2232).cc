#define _CRT_SECURE_NO_WARNINGS


#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std; \

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int* p = new int[n+2];
	vector<int> answer;
	
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	
	int check = 1;

	

	for (int i = 1; i <= n; i++) {	
		if (p[i] == p[i+1]) {
			answer.push_back(check);
			check = i+1;
		}
		else if(p[i] < p[i+1]){
			if (p[i-1] > p[i] && i > 1) {
				answer.push_back(check);
			}
			check = i+1;
		}
	}

	answer.push_back(check);

	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}

	return 0;
}