#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;
	cin >> a >> b;
	int size;
	cin >> size;
	int *arrA = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arrA[i];
	}
	
	long long temp = 0;
	long long n = 1;
	for (int i = size - 1; i >= 0; i--) {
		temp += arrA[i] * n;
		n = n * a;
	}
	int arrB[10000];
	n = 0;
	for (int i = 0; temp / b != 0; i++) {
		arrB[i] = temp % b;
		temp = temp / b;
		n++;
	}
	arrB[n] = temp;
	n++;
	for (int i = n-1; i >= 0; i--) {
		cout << arrB[i] << ' ';
	}
}