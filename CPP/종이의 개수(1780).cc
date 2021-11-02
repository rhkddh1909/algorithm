#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
void cut(int, int, int);
#define MAX 1
#define MID 0
#define MIN -1

int **arr;
int n;
int one = 0, zero = 0, mone = 0;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	
	cin >> n;
	
	arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	cut(0, 0, n);
	cout << mone << '\n';	
	cout << zero << '\n';
	cout << one << '\n';
}
void cut(int x, int y, int size) {
	int sum[3] = { 0, };
	for (int i = y; i < y+size; i++) {
		for (int j = x; j < size+x; j++) {
			if (arr[i][j] == MAX) {
				sum[0]++;
			}
			else if (arr[i][j] == MID) {
				sum[1]++;
			}
			else if (arr[i][j] == MIN) {
				sum[2]++;
			}
		}
	}
	if (sum[0] == size*size) {
		one++;
	}
	else if (sum[1] == size * size) {
		zero++;
	}
	else if (sum[2] == size * size) {
		mone++;
	}
	else {
		for (int i = y; i < size+y; i += size/3) {
			for (int j = x; j < size+x; j += size / 3) {
				cut(j, i, size / 3);
			}
		}
	}
}