#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int maxn = 0;
	int person = 0;
	for (int i = 0; i < 4; i++) {
		int out;
		int in;
		cin >> out >> in;
		person += in - out;
		maxn = max( maxn , person);
	}

	cout << maxn;

	return 0;
}
