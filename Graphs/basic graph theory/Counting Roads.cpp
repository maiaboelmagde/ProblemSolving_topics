//link:https://vjudge.net/contest/550199#problem/A
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
}
int n,m;
vector<int>adj[59];
int main(){
    fun();
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=1;i<=n;i++) cout<<adj[i].size()<<endl;
    
    
    return 0;
}