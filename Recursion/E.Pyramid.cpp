//https://codeforces.com/group/gA8A93jony/contest/269931/problem/E
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void build(string *arr,int n,int max){
    string str;
    for(int i=0;i<max-n;i++){
        str+=' ';
    }
    for(int i=0;i<(n*2)-1;i++){
        str+='*';
    }
    arr[n-1]=str;
}
int rec(string *arr,int n,int max){
    if(n==0){
        return 1;
    }
    build(arr,n,max);
    return rec(arr,n-1,max);
    
}
int main(){
    fun();
    int n; cin>>n;
    string arr[n];
    rec(arr,n,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}