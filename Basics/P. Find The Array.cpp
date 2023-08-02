//poblem link: https://codeforces.com/group/nMgBPsURd2/contest/337057/problem/P
#include <bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main() {
    fun();
    
    int t; cin>>t;
    while(t--){
        int s; cin>>s;
        int sum=0,count=0;
        for(int i=1;sum<s;i+=2){
            sum+=i;
            count++;
        }
        
        cout<<count<<endl;
    }

    return 0;
}