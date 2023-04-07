//problem link :https://vjudge.net/contest/548760#problem/D
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n;
int arr[3009];
long long dp[3009][3009][2];
//tern : 0 for Taro & 1 for Jiro
long long operate(int l,int r,int turn){
    if(r<l) return 0;
    auto &ret=dp[l][r][turn];
    if(~ret) return ret;
    if(turn==0){
        ret=max(operate(l+1,r,1)+arr[l],operate(l,r-1,1)+arr[r]);
    }else{
        ret=min(operate(l+1,r,0)-arr[l],operate(l,r-1,0)-arr[r]);
    }
    
    return ret;
}
int main(){
    fun();
    memset(dp,-1,sizeof dp);
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<operate(0,n-1,0);
    
    
    
    
    return 0;
}