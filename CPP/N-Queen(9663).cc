#include <iostream>
#include <math.h>
using namespace std;
 
int N;
int ans=0;
int queen[16]={0};
 
bool promising(int n){
    for(int i=1;i<n;i++){
        if(queen[n]==queen[i] || n-i==abs(queen[n]-queen[i]))
            return false;
    }
    return true;
}
void dfs(int n){
    if(n==N+1){
        ans++;
        return;
    }
    
    for(int i=1;i<=N;i++){
        queen[n]=i;
        if(promising(n)){
            dfs(n+1);
        }
    }
}
int main(){
    
    cin>>N;
    dfs(1);
    cout<<ans<<endl;
    return 0;
}