#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;



int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int stack[1024];
	int top = 0;
	int cmdnum;
	cin >> cmdnum;

	for (int i = 0; i < cmdnum; i++) {
		string cmd;
		cin >> cmd;
		
		if (cmd == "push") {
			if (top < 1025) {
				int data;
				cin >> data;
				stack[top] = data;
				top++;
			}
		}
		else if (cmd == "pop") {
			if (top > 0) {
				int data = 0;
				top--;
				data = stack[top];
				stack[top] = 0;
				cout << data << '\n';
			}
			else {
				cout << "-1\n";
			}
		}
		else if (cmd == "size") {
			cout << top << '\n';
		}
		else if (cmd == "empty") {
			if(top == 0){
				cout << "1\n";
			}
			if (top > 0) {
				cout << "0\n";
			}
		}
		else if (cmd == "top") {
			if (top > 0) {
				cout << stack[top-1] << '\n';
			}
			else {
				cout << "-1\n";
			}
		}
	}
}
