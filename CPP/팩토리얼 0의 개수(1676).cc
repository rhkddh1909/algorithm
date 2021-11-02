#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, cnt = 0;
	cin >> n;
	for (int i = n; i>0; i--) {
		if (i % 125 == 0) {
			cnt = cnt+3;
		}
		else if(i%25 == 0){
			cnt = cnt + 2;
		}
		else if (i % 5 == 0) {
			cnt = cnt + 1;
		}
	}
	cout << cnt;
}
