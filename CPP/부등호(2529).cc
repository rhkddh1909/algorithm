#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	
	char k[10];
	char max[10] = {'9','8','7','6','5','4','3','2','1','0'};
	char min[10] = {'0','1','2','3','4','5','6','7','8','9'};
	int check[10] = { 0, };
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k[i];
	}

	for (int i = 0; i < t; i++) {
		for (int j = i + 1; j < t + 1; j++) {
			if (k[j-1] == '>') {
				if (max[i] - '0' > max[j] - '0') {
					break;
				}
				else {
					int temp = max[i];
					max[i] = max[j];
					max[j] = temp;
				}
			}
			else {
				if (max[i] - '0' < max[j] - '0') {
					break;
				}
				else {
					int temp = max[i];
					max[i] = max[j];
					max[j] = temp;
				}
			}
		}
		for (int j = i + 1; j < t + 1; j++) {
			if (k[j - 1] == '>') {
				if (min[i] - '0' > min[j] - '0') {
					break;
				}
				else {
					char temp = min[i];
					min[i] = min[j];
					min[j] = temp;
				}
			}
			else {
				if (min[i] - '0' < min[j] - '0') {
					break;
				}
				else {
					char temp = min[i];
					min[i] = min[j];
					min[j] = temp;
				}
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < t + 1; j++) {
			if (i == 0) {
				cout << max[j];
			}
			else {
				cout << min[j];
			}
		}
		cout << '\n';
	}

	return 0;
}