#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int arr[100];
	int cnt = 0;
	int check = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] != 0) {
			for (int j = 1; j < arr[i]; j++) {
				if (arr[i] % j == 0) {
					check++;
				}
			}
		}
		if (check == 1) {
			cnt++;
		}
		check = 0;
		
	}
	cout << cnt;
}