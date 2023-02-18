#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
int n,m;
vector<string>arr;

int rec(int x,int y){
    if(x>=n ||x<0 ||y>=m ||y<0 ||arr[x][y]=='*') return 0;
    
    arr[x][y]='*';
    return 1+rec(x-1,y)+rec(x+1,y)+rec(x,y+1)+rec(x,y-1);
    
}
int main(){
    fun();
     cin>>n>>m;
    arr.resize(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int x,y; cin>>x>>y;
    
    cout<<rec(--x,--y);
    return 0;
}