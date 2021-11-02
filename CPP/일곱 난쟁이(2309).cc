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
	for (int i = 0; i < 9; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	int sum = 0;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}
	sum -= 100;
	for (int i = 0; i < v.size()-1; i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] + v[j] == sum) {
				sum -= v[i] + v[j];
				v[i] = -1;
				v[j] = -1;
				break;
			}
		}
		if (sum == 0) {
			break;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		if (v[i] != -1) {
			cout << v[i] << '\n';
		}
	}

	return 0;
}