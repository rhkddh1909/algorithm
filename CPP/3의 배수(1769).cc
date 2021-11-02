#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(void){
  ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
  string num;
  
  cin >> num;
  
  unsigned long long checknum = 0;
  unsigned long long cnt = 0;
  
  if(num.length() > 1){
    while(1){
      cnt++;
      for(int i = 0; num[i]; i++){
        checknum += num[i] - '0';
      }
      if(checknum < 10){
        break;
      }
      else{
        num = to_string(checknum);
        checknum = 0;
      }
    }
  }
  else{
   checknum = num[0] - '0'; 
  }
  cout << cnt << '\n';
  if(checknum == 3 || checknum == 6 || checknum == 9){
    cout << "YES";
  }
  else{
    cout << "NO";
  }
}
