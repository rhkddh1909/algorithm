#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	
	while (1) {
		getline(cin, str);
		if (str == "") {
			break;
		}
		int arr[4] = {};
		for (int i = 0; str[i]; i++) {
			if (49 <= (str[i] - '0') && 75 >= (str[i] - '0')) {
				arr[0]++;
			}
			else if (17 <= (str[i] - '0') && 42 >= (str[i] - '0')) {
				arr[1]++;
			}
			else if (0 <= (str[i] - '0') && 9 >= (str[i] - '0')) {
				arr[2]++;
			}
			else if (str[i] == ' ') {
				arr[3]++;
			}

		}
		for (int k = 0; k < 4; k++) {
			cout << arr[k] << ' ';
		}
		cout << '\n';
		
	}
}