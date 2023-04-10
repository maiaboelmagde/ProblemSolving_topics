//link:https://vjudge.net/contest/550199#problem/B
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
}
int n,m;
vector<int>adj[(int)1e5+9];
vector<int>height((int)1e5+9);

int main(){
    fun();
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>height[i];
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int count=0;
    for(int i=1;i<=n;i++){
        bool flag=0;
        for(int child:adj[i]){
            if(height[child]>=height[i]){
                flag=1; break;
            }
        }
        if(!flag) count++;
    }
    
    cout<<count;
    
    return 0;
}