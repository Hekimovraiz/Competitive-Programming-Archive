// Problem ID: 59A
// Platform: Codeforces
// Link: https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int sz = 1e3 + 9;
 
 
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(nullptr);
    string n;
    cin >> n;
    int u = 0 , l = 0;
 
    for(int i = 0 ; i < (int)n.size() ; ++i)
    {
        if(isupper(n[i]))
        {
            ++u;
        }
        else if(islower(n[i]))
        {
            ++l;
        }
    }
 
    if(u > l)
    {
        for(int i = 0 ; i < (int)n.size() ; ++i)
        {
            cout << (char)toupper(n[i]);
        }
    }
    else
    {
        for(int i = 0 ; i < (int)n.size() ; ++i)
        {
            cout << (char)tolower(n[i]);
        }
    }
 
    cout << endl;
 
    
}