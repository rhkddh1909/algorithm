#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int zero = 0;
	int one = 0;

	string str;
	
	cin >> str;
	
	string zip = "";

	for (int i = 0; i < str.length(); i++) {
		if (i == 0) {
			if (str[i] == '1') {
					zip += "1";
			}
			else {
				zip += "0";
			}
		}
		else{
			if (str[i] != str[i - 1]) {
				zip += str[i];
			}
		}

	}
	
	for (int i = 0; i < zip.length(); i++) {
		if (zip[i] == '1') {
			one++;
		}
		else {
			zero++;
		}
	}

	cout << min(zero, one);

	return 0;
} 
