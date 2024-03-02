//prob_link:https://codeforces.com/problemset/problem/1829/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        bool current_digit;
        int max_zeros = 0, cur_zeroes = 0;
        for(int i = 0; i < n; i++){
                cin>>current_digit;
                if(current_digit == 0)
                        cur_zeroes++;
                else{
                        max_zeros = max(max_zeros, cur_zeroes);
                        cur_zeroes = 0;
                }
        }
        cout<<max(max_zeros, cur_zeroes)<<endl;

    }
    return 0;
}
