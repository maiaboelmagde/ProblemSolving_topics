//problem link: https://codeforces.com/group/nMgBPsURd2/contest/337057/problem/O
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    fun();
    int q; cin>>q;
    while(q--){
        string s; cin>>s;
        int l=0,r=0,u=0,d=0,count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L')l++;
            else if(s[i]=='R')r++;
            else if(s[i]=='U')u++;
            else if(s[i]=='D')d++;
        }
        
        l=r=min(l,r);
        u=d=min(u,d);
        
         if(r==0 && u==0) {cout << 0 << endl; continue;}
        if(r==0 && u!=0) {cout << 2<<endl<< "UD" << endl; continue;} 
        if(r!=0 && u==0) {cout << 2<<endl<<"RL" << endl; continue;}  
        
        cout<<(u+l+r+d)<<endl;
        while(u--) cout<<"U";
        while(r--) cout<<"R";
        while(d--) cout<<"D";
        while(l--) cout<<"L";
        
        cout<<endl;

    }
}