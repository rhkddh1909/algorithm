#include <iostream>
#include <vector>

using namespace std;

void hanoi(int, char, char, char);
int num = 0;
vector<char> v;
int main(void){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	hanoi(n, '1', '2', '3');

	cout << num << '\n';
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i % 2 == 0) {
			cout << ' ';
		}
		else {
			cout << '\n';
		}
	}
}
void hanoi(int n, char from, char temp, char to) {
	if (n == 1) {
		v.push_back(from);
		v.push_back(to);
		num++;
	}
	else {
		hanoi(n - 1, from, to , temp);
		v.push_back(from);
		v.push_back(to);
		num++;
		hanoi(n - 1, temp, from, to);
	}
}