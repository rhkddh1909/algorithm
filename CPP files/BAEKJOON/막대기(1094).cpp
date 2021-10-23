#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	vector<int> v;
	int x;
	cin >> x;
	v.push_back(64);
	int sum = 64;
	while (x != sum) {
		sum = 0;
		int temp = v[v.size() - 1] / 2;
		v[v.size() - 1] = temp;
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}
		if (x > sum) {
			v.push_back(temp);
		}
	}

	cout << v.size();

	return 0;
}
