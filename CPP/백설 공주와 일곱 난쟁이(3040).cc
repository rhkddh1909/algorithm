#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 9;
	int chk = 0;
	int sum = 0;
	int arr[9] = {};
	int ans1 = 0;
	int ans2 = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];

	}
	
	sort(arr,arr+n);

	for (int j = 0; j < n; j++) {
		if(arr[j] >= (sum-100)){
			chk = j+1;
			break;
		}
		chk = j + 1;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < chk; j++) {
			if (arr[i]+arr[j] == (sum-100)) {
				ans1 = arr[i];
				ans2 = arr[j];
				break;
			}
		}
		if (ans1 != 0) {
			break;
		}
	}
	
	for (int i = 0; i < n; i++) {
		if (arr[i] != ans1 && arr[i] != ans2){
			cout << arr[i] << '\n';
		}
	}

	return 0;
}