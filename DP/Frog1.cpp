//problem link:https://vjudge.net/contest/544757#problem/F
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
const int N=10e5+2;

int dp[N];
int h[N];

int solve(int n){
    if(n==0) return 0;  //base case
    
    if(dp[n]!=-1) return dp[n];    //if that operation done before,return the result
    
    //transision
    int cost;
    
    if(n>1)
        cost=min(solve(n-1)+abs(h[n]-h[n-1]),solve(n-2)+abs(h[n]-h[n-2]));
    else
        cost=solve(n-1)+abs(h[n]-h[n-1]);
    
    return dp[n]=cost;   //store the result
}

int main(){
    fun();
    memset(dp,-1,sizeof(dp));
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    
    cout<<solve(n-1);
    
    return 0;
}