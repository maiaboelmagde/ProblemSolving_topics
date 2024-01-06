#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    stack<char>st;
    stack<int>st_pos;
    int maxcount = 0;
    int num_max=1;
    int  arr[s.size()]= {0};

    for(int i=0; i<s.length(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{' || s[i] == '<')
        {
            st.push(s[i]);
            st_pos.push(i);
        }else if (!st.empty()){
                if ((s[i] == ')' && st.top() == '(') || (s[i] == ']' && st.top() == '[') || (s[i] == '}' && st.top() == '{') || (s[i] == '>' && st.top() == '<'))
                {
                    arr[i] =i-st_pos.top()+1;
                    if (st_pos.top()>=1) arr[i] += arr[st_pos.top()-1];
                    st.pop();
                    st_pos.pop();
                    if(maxcount == arr[i]) num_max++;
                    else if (maxcount < arr[i]){
                        maxcount = arr[i];
                        num_max = 1;
                    }
                    
                }else{
                    while(!st.empty())
                        st.pop();
                    while(!st_pos.empty())
                        st_pos.pop();
                }
        }
    }
    
     cout<<maxcount<<" "<<num_max<<endl;
    return 0;
}
