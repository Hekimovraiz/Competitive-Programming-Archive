/*
 * Problem: 734A
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/734/problem/A
 */
#include <bits/stdc++.h>
#define int long long
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);  cout.tie(nullptr);
    int n , d = 0 , a = 0;
    string s;
    cin >> n >> s;
 
    for(auto i : s)
    {
        if (i == 'D')
        {
            ++d;
        }
        else
        {
            ++a;
        }
    }
    if(d == a){cout << "Friendship
";}
    else if(d > a){cout << "Danik
";}
    else if(a > d){cout << "Anton
";}
 
    
}
 