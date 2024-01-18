//problem link: https://vjudge.net/contest/599285#problem/H
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
}
int main()
{
    fun();
    int n; cin>>n;
    string s; cin>>s;
    stack<int>st;
    queue<int>q;
    for(int i=0;i<s.size(); i++)
    {
        if(s[i] == 'R') q.push(i);
        else st.push(i);
    }
        q.push(n);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}
