#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
  int n = 0;
  vector<int> v;
  cin >> n;
  
  
  for(int i = 0; i < n; i++){
    int temp; 
    cin >> temp;
    v.push_back(temp);
  }
  
  sort(v.begin(),v.end(),greater<int>());
  
  for(int i = 0; i < n-2; i++){
    for(int j = i+1; j < n-1; j++){
      if(v[i] < v[j]+v[j+1]){
        cout << v[i]+v[j]+v[j+1];
        return 0;
      }
    }
  }
  
  cout << -1;
  
  return 0;
  
}
