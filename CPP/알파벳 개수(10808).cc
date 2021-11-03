#include<iostream>
#include<queue>
#include<algorithm>
#include<string.h>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char ch[100] = {};
	int len[26] = { 0, };
	
	cin >> ch;
	
	for (int i = 0; i < strlen(ch); i++) {
		len[ch[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		cout << len[i] << ' ';
	}
	return 0;
}