//link:https://vjudge.net/contest/550199#problem/C
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
}
int n,m;
int adj[(int)1e5+9];

int main(){
    fun();
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        adj[a]++;adj[b]++;
    }
    int link_1=0,link_2=0,link_many=0;
    for(int i=1;i<=n;i++){
        if(adj[i]==1) link_1++;
        else if(adj[i]==2) link_2++;
        else if(adj[i]==n-1) link_many++;
        else break;
    }
    
    if(link_1==2 &&link_2==n-2) cout<<"bus topology"<<endl;
    else if(link_2==n) cout<<"ring topology"<<endl;
    else if(link_many==1 &&link_1==n-1) cout<<"star topology"<<endl;
    else cout<<"unknown topology"<<endl;
    
    return 0;
}