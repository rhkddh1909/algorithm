#include <iostream>
#include <algorithm>
#include <math.h>



using namespace std;

int arr[500] = {0,};

int main(void) {

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	long double sum = 0;
	long double avg = 0.0;
	long double f = 10000000.0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long double temp = 0.0;

	for (int i = 0; i < n - k+1; i++) {
		for (int j = k-1+i; j < n; j++) {
			for (int m = i; m <= j; m++) {
				sum += arr[m];
			}
			avg = sum / (j-i+1);
			
			for (int m = i; m <= j; m++) {
				temp += ((arr[m] - avg) * (arr[m] - avg));
			}
			
			long double sq = sqrtl(temp / (j - i + 1));
			f = min(f, sq);
			sum = 0;
			temp = 0.0;
		}
	}

	printf("%Lf", f);

	return 0;
}