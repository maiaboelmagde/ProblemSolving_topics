//problem link: https://vjudge.net/contest/599285#problem/B
#include<bits/stdc++.h>
using namespace std;
void fun(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        queue<int>q;
        vector<int>v(n+1);
        vector<int>result_v(n+1);
        for(int i=1;i<=n;i++) q.push(i);
        int indx=1;
        while(!q.empty()){
            v[indx] = q.front();
            indx++;
            q.pop();
            q.push(q.front());
            q.pop();
        }
        for(int i=1;i<=n; i++)
        {
            result_v[v[i]]=i;
        }
        cout<<result_v[1];
        for(int i=2;i<=n;i++)cout<<" "<<result_v[i];
        cout<<endl;
    }
    return 0;
}
