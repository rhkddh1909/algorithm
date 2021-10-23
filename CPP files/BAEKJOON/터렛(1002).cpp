#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;


int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
  
  int t;
  int x1,y1,x2,y2,r1,r2;
  cin >> t;
  
  for(int i = 0; i < t; i++){
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    int answer = 0;
    int dist = ((x1-x2)*(x1-x2)) + ((y1-y2)*(y1-y2));
    if(x1 == x2 && y1 == y2 && r1 == r2){
      answer = -1;
    }
    else if(dist > (r1 + r2)*(r1 + r2)){
      answer = 0;
    }
    else if(dist == (r1 + r2)*(r1 + r2)){
      answer = 1;
    }
    else if(dist < (r1 + r2)*(r1 + r2)){
      if(dist > (r1 - r2)*(r1 - r2)){
        answer = 2; 
      }
      else if(dist == (r1 - r2)*(r1 - r2)){
        answer =  1;
      }
      else if(dist < (r1 - r2)*(r1 - r2)){
        answer = 0 ;
      }
    }
    cout << answer << '\n';
  }
  
  return 0;
}
