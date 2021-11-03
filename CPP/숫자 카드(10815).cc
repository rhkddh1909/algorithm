#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

int cmp(const void* a, const void* b) {
	int x = *(int*)(a);
	int y = *(int*)(b);
	if (x < y) {
		return -1;
	}
	else if(x > y){
		return 1;
	}
	else {
		return 0;
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	vector<int> my;
	vector<int> check;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		my.push_back(temp);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int temp;
		cin >> temp;
		check.push_back(temp);
	}
	
	qsort(&my[0], my.size(), sizeof(my[0]), cmp);

	for (int i = 0; i < m; i++) {
		if (bsearch(&check[i], &my[0], my.size(), sizeof(my[0]), cmp) != NULL) {
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}
}
