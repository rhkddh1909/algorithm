#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);

	cout.tie(NULL);
	cin.tie(NULL);
	
	int money = 1000;
	int num = 0;
	int m = 500;
	int check = 1;
	int rec;
	cin >> rec;
	money = money - rec;
	while (money != 0) {
		num += money / m;
		money = money % m;
		if (check % 2 == 1) {
			m = m / 5;
		}
		else {
			m = m / 2;
		}
		check++;
	}
	cout << num;
}