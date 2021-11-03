#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(const string &a, const string &b) {
	return a + b > b + a;
}
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string answer = "";
	vector<string> strArr;
	
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		strArr.push_back(temp);
	}
	sort(strArr.begin(),strArr.end(),cmp);
	for (string str : strArr) {
		answer += str;
	}
	if (answer[0] == '0'){
		cout << "0";
    }
    else{
	    cout << answer;
    }
}

