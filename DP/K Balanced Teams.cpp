//problem link :https://codeforces.com/contest/1133/problem/E
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int n,k;
int arr[5009];
int dp[5009][5009];
int operate(int index,int rem){
    if(index>=n) return 0;
    auto &ret=dp[index][rem];
    if(~ret) return ret;
    
    ret=operate(index+1,rem);
    if(rem>0){
        int index2=upper_bound(arr,arr+n,arr[index]+5)-arr;
        index2--;
        ret=max(ret,operate(index2+1,rem-1)+(index2-index+1));
    }
    return ret;
}
int main(){
    fun();
    memset(dp,-1,sizeof dp);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    cout<<operate(0,k);
    
    
    
    
    return 0;
}