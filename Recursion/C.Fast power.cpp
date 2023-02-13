//https://codeforces.com/group/gA8A93jony/contest/269931/problem/C
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);   cout.tie(0);
}
long  long power(long long n,long long m){
    if(m==1) return n;
    if(m%2){
        return (n*power(n,m-1))%1000000007;
    }else{
        return ((power(n,m/2)*power(n,m/2))%1000000007);
    }
    
}
int main(){
    long long n,m;
    cin>>n>>m;
    n%=1000000007 ;
    cout<<power(n,m)<<endl;
    
    return 0;
}