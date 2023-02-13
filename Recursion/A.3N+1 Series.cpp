//problem link : https://codeforces.com/group/gA8A93jony/contest/269931/problem/A
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);   cout.tie(0);
}
int myfun(int n){
    if(n==1)   return 1;
    if(n%2) return 1+myfun(3*n+1);
    else    return 1+myfun(n/2);
}
int main(){
    fun();
    int n; cin>>n;
    cout<<myfun(n)<<endl;
    return 0;
}