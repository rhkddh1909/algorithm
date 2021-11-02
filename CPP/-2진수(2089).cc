#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long n;
	cin >> n;
	int i, result;
	long long temp;
	int check = 1;
	int *arr = NULL;
	if (n == 0) {
		cout << '0';
	}
	else {
		while (n != 0) {
			temp = 0;
			if (n < 0) {
				for (i = 1; n < temp; i = i + 2) {
					temp += pow(-2, i);

				}
				i = i - 2;

			}
			else if (n > 0) {
				for (i = 0; n > temp; i = i + 2) {
					temp += pow(-2, i);
				}
				i = i - 2;
			}
			if (check) {
				arr = new int[i + 1]();
				check--;
				result = i;
			}
			arr[i] = 1;
			n = n - pow(-2, i);
		}
		for (int i = result; i >= 0; i--) {
			cout << arr[i];
		}
	}
}
