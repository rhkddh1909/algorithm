#include <iostream>

using namespace std;

void pre(int);
void mid(int);
void post(int);
struct Node {
	char root;
	pair<char, int> child;
};
int n;
Node node[26];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		char data1, data2, data3;
		cin >> data1 >> data2 >> data3;
		node[i].root = data1;
		node[i].child = make_pair(data2, data3);
	}
	pre(0);
	cout << '\n';
	mid(0);
	cout << '\n';
	post(0);
}
void pre(int pos) {
	cout << node[pos].root;
	if (node[pos].child.first != '.') {
		for (int i = 0; i < n; i++) {
			if (node[pos].child.first == node[i].root) {
				pre(i);
			}
		}
	}
	if (node[pos].child.second != '.') {
		for (int i = 0; i < n; i++) {
			if (node[pos].child.second == node[i].root) {
				pre(i);
			}
		}
	}
}
void mid(int pos) {
	if (node[pos].child.first != '.') {
		for (int i = 0; i < n; i++) {
			if (node[pos].child.first == node[i].root) {
				mid(i);
			}
		}
	}
	cout << node[pos].root;
	if (node[pos].child.second != '.') {
		for (int i = 0; i < n; i++) {
			if (node[pos].child.second == node[i].root) {
				mid(i);

			}
		}
	}

}
void post(int pos) {
	if (node[pos].child.first != '.') {
		for (int i = 0; i < n; i++) {
			if (node[pos].child.first == node[i].root) {
				post(i);
			}
		}
	}
	if (node[pos].child.second != '.') {
		for (int i = 0; i < n; i++) {
			if (node[pos].child.second == node[i].root) {
				post(i);

			}
		}
	}
	cout << node[pos].root;
}