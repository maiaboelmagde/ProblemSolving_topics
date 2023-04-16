//https://vjudge.net/contest/550199#problem/F
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    fun();
    int t; cin>>t;
    while(t--){
     int n,m,p;
     cin>>n>>p;
     m=n*2+p;
     int i=1,j=2;
     while(m){
     while(j<=n && m){
            if(j!=i){
            cout<<i<<" "<<j<<endl;
            m--;
                
            }
            j++;
        }
        i++;
        j=i+1;
        
     }
      
    }
    
    
    return 0;
}