//link: https://vjudge.net/contest/550199#problem/K
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool not_all[1009];
int main(){
    fun();
    int n,m ,a,b;
    cin>>n>>m;
    while(m--){
        int a,b;cin>>a>>b;
        not_all[a]=1;
        not_all[b]=1;
    }
    cout<<n-1<<endl;
    for(int i=1;i<=n;i++){
        if(!not_all[i]){
           for(int j=1;j<=n;j++){
               if(j!=i) cout<<i<<" "<<j<<endl;
           }
           break;
        }
    }
    
    return 0;
}