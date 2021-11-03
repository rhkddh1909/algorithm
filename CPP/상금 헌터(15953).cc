#include <iostream>

using namespace std;

int fest17(int );
int fest18(int);

int main(void) {

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);
	cout.tie(NULL);

	int t, a, b;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;

		cout << fest17(a)+fest18(b) << '\n';
	}
	
	return 0;
}

int fest17(int a) {
	if (a == 1) {
		return 5000000;
	}
	else if(2<=a && 3>= a){
		return 3000000;
	}
	else if (4 <= a && 6 >= a) {
		return 2000000;
	}
	else if (7 <= a && 10 >= a) {
		return 500000;
	}
	else if (11 <= a && 15 >= a) {
		return 300000;
	}
	else if (16 <= a && 21 >= a) {
		return 100000;
	}
	else {
		return 0;
	}
}

int fest18(int a) {
	if (a == 1) {
		return 5120000;
	}
	else if (2 <= a && 3 >= a) {
		return 2560000;
	}
	else if (4 <= a && 7 >= a) {
		return 1280000;
	}
	else if (8 <= a && 15 >= a) {
		return 640000;
	}
	else if (16 <= a && 31 >= a) {
		return 320000;
	}
	else{
		return 0;
	}
}