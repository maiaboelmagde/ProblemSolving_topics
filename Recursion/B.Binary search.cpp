//https://codeforces.com/group/gA8A93jony/contest/269931/problem/B
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);   cout.tie(0);
}
int mynum;
 
int myfun(vector<int> &v1,int l,int r){
    int mid=(l+r)/2;
    if(l>r)  return -1;
    if(v1[mid]==mynum){
        return mid+1;
    }else if(mynum>v1[mid]){
        return myfun(v1,mid+1,r);
    }else{
        return myfun(v1,l,mid-1);
    }
 
}
int main(){
    fun();
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int q; cin>>q;
        while(q--){
            cin>>mynum;
            cout<<myfun(v,0,n-1)<<endl;
        }
 
 
    return 0;
}