#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	cin >> str;
	string arr[8] = { "000", "001" ,"010" ,"011" ,"100" ,"101" ,"110","111" };
	for (int i = 0; i < str.length(); i++) {
		int temp = (str[i] - '0');
		for (int j = 4; j > 0; j = j - 2) {
			if (temp < j) {
				if (i != 0) {
					cout << temp / j;
				}
				if (j == 2) {
					cout << temp % j;
				}
			}
			else {
				cout << temp / j;
				temp = temp % j;
				if (temp < 2 && j == 4 && i == 0) {
					cout << '0';
				}
				if (j == 2) {
					cout << temp % j;
				}
			}
		}
	}
}
