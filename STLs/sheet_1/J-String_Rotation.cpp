// https://vjudge.net/contest/599285#problem/J
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    cin>>s>>t;
    
    bool flag = 0;
    //getting the first letter position 
    stack<int>pos;
    for(int i = 0; i < t.length(); i++)
        if(t[i] == s[0])pos.push(i);
    
    while(!pos.empty()){
        int pos_i = pos.top();
        bool cur_flag = 1;
        for(int i = 0; i < s.size(); i++,pos_i++)
        {
            if(s[i] != t[pos_i])
            {
                cur_flag = 0;
                break;
            }
            if(pos_i == t.length()-1) pos_i = -1;
        }
        pos.pop();
        if(cur_flag){
            flag = 1;
            break;
        }
    }
    
    if(flag) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
