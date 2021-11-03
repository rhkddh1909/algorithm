#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	struct admin{
		string name;
		int age;
		int fast;
	};
	
	int n;
	cin >> n;
	vector<admin> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].age >> v[i].name;
		v[i].fast = i;
	}
	sort(v.begin(), v.end(), [](admin a, admin b) {
		return (a.age < b.age) || ((a.age == b.age) && (a.fast < b.fast));
	});
	for (int i = 0; i < n; i++) {
		cout << v[i].age << ' ' << v[i].name << '\n';
	}
}