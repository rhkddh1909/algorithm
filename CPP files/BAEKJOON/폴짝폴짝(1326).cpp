#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
  int n,a,b;
  int stone[10001];
  int dp[10001];
  cin >> n;
  
  for(int i = 1; i <= n; i++){
    dp[i] = 9999999;
    cin >> stone[i];
  }
  
  cin >> a >> b;
  dp[a] = 0;
  queue<int> q;
  q.push(a);
  while(!q.empty()){
	  int tmp = q.front();
	  q.pop();
	  for(int j = 1; tmp+j*stone[tmp] <= n; j++){  
	      if(tmp+j*stone[tmp] <= n){
		  if(dp[tmp]+1 < dp[tmp+j*stone[tmp]]){
			  dp[tmp+j*stone[tmp]] = dp[tmp]+1;
			  q.push(tmp+j*stone[tmp]);
		  }
	      }
	  }
	  for(int j = 1; tmp+(-1)*j*stone[tmp] >= 1; j++){
	      if(tmp+(-1)*j*stone[tmp] >= 1){
		      if(dp[tmp]+1 < dp[tmp+(-1)*j*stone[tmp]]){
			  dp[tmp+(-1)*j*stone[tmp]] = dp[tmp]+1;
			  q.push(tmp+(-1)*j*stone[tmp]);
		      }
	      }
	  }
  }
  if(dp[b] != 9999999){
     cout << dp[b];
  }
  else{
     cout << -1;
  }
  return 0;
}
