#define _CRT_SECURE_NO_WARNINGS


#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

struct Trie {
	bool finish;
	Trie* next[26];
	
	Trie() : finish(false) {
		memset(next, 0, sizeof(next));
	}

	~Trie() {
		for (int i = 0; i < 26; i++) {
			if (next[i]) {
				delete next[i];
			}
		}
	}

	void insert(const char* key) {
		if (*key == '\0') {
			finish = true;
		}
		else {
			int curr = *key - 'a';
			if (next[curr] == NULL) {
				next[curr] = new Trie();
			}
			next[curr]->insert(key + 1);
		}
	}

	bool find(const char* key) {
		if (*key == '\0') {
			return finish;
		}
		
		int curr = *key - 'a';
		
		if (next[curr] == NULL) {
			return false;
		}

		return next[curr]->find(key + 1);
	}
};


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int answer = 0;
	cin >> n >> m;

	Trie t;
	
	for (int i = 0; i < n; i++) {
		char* tmpstr = new char[500];
		cin >> tmpstr;
		t.insert(tmpstr);
	}

	for (int i = 0; i < m; i++) {
		char* findstr = new char[500];
		cin >> findstr;

		if (t.find(findstr) == 1) {
			answer++;
		}
	}

	cout << answer++;

	return 0;
}
