//problem link: https://codeforces.com/problemset/problem/545/C
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
vector<long long>v,h; 
long long dp[(int)1e5+2];
int n;
long long solve(int index,int last_pos){
    if(index==n-1) return 1;         //if the current tree is last tree we will definitely cut it and fell it to the side that doesn't have trees on it.
    if(dp[index]!=-1) return dp[index];   //check if we did this operation then return the result , if not do it:
    //let's imagine we begin from left to right
    long long mx=0;       
    if(v[index]-h[index]>last_pos)   //check if we can fell the current tree to the left(there is unoccupied space that is enough to the tree).
        mx=max(mx,1+solve(index+1,v[index])); 
    else if(v[index]+h[index]<v[index+1])  ////check if we can fell the current tree to the right
        mx=max(mx,1+solve(index+1,v[index]+h[index]));
    else                                //if there is no space then just skip this tree
        mx=solve(index+1,v[index]);
        
    return dp[index]=mx;    //save the result then return it
    
}
int main(){
    fun();
    memset(dp,-1,sizeof(dp));
    cin>>n;
    v.resize(n); h.resize(n);
    for(int i=0;i<n;i++) cin>>v[i]>>h[i];

    if(n<=2) cout<<n<<endl;   //if there is two trees or less we will cut all of them
    else cout<<solve(1,v[0])+1<<endl; //else: we will cut the first one and fell it to side that doesn't have trees on it , so last occupies position whould be v[i](first tree's position)
    
    
    return 0;
}