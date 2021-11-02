#define _CRT_SECURE_NO_WARNINGS

#include <iostream>


using namespace std;

int main(void) {
	string d[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int a, b, sum = 0;
	cin >> a >> b;
	for (int i = 1; i <= a - 1; i++) {
		if (i == 2) {
			sum += 28;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			sum += 30;
		}
		else {
			sum += 31;
		}
	}
	sum += b;
	
	cout << d[sum % 7].c_str();
}