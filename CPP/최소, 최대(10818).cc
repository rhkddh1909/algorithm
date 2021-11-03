#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

int main(void) {
	int a, min = 1000000, max = -1000000;
	cin >> a;
	
	for (int i = 0; i < a; i++) {
		int temp;
		cin >> temp;
		max = (temp > max) ? temp : max;
		min = (temp < min) ? temp : min;
	}
	

	cout << min << " " << max;

	return 0;
}