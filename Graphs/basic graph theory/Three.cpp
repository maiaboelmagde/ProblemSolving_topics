//link:https://vjudge.net/contest/550199#problem/D
/*
steps:
1.recieve n,m from user
2.recieve m lines contain a,b that represent Warriors ai and bi know each other.
  while that, fill in Adjacency matrix(mat) and Adjacency list(adj)

3.pass (node we start with , answer initial value ) to Operate function
    at that function:
    we establish 3 for loops that calculate the answer and return it.

*/
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
}
int n,m;
vector<int>adj[100009];
bool mat[4009][4009];

int operate(int grand_node,int ans){
    if(grand_node>n) return ans;    //base case
    
    for(int parent_node=0;parent_node<adj[grand_node].size();parent_node++){  //parent_nodes are children of grend_nodes or nodes that connect with it.
        for(int child_node=0;child_node<adj[adj[grand_node][parent_node]].size();child_node++){ //child_nodes are nodes that connect with parent_nodes. 
            if(mat[adj[adj[grand_node][parent_node]][child_node]][grand_node]) //chack if child_node connect with grand_node 
                    ans=min(ans,(int)adj[grand_node].size()+(int)adj[adj[grand_node][parent_node]].size()+(int)adj[adj[adj[grand_node][parent_node]][child_node]].size()-6);
        }
    }
    return operate(grand_node+1,ans);
}

int main(){
    fun();
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int a,b; cin>>a>>b;
        //push it to Adjacency list
        adj[a].push_back(b);
        adj[b].push_back(a);
        //store it at Adjacency matrix
        mat[a][b]=mat[b][a]=1;
    }
    
    
    int ans=operate(1,(int)1e9);
    
    if(ans>=(int)1e9) cout<<-1<<endl;
    else cout<<ans<<endl;
    
    return 0;
}