/*
 * Problem: 291A
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/291/A
 */

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
using namespace std;

signed main()
{
    int n;
    cin >> n;
    if(n < 2)
    {
        cout << 0 << "\n";
        return 0;
    }
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i ;
    }

    if(n == 2 && v[0] == v[1])
    {
        cout << 1 << "\n";
        return 0;
    }
    else if(n == 2 && v[0] != v[1])
    {
        cout << 0 << "\n";
        return 0;
    }

    set<int> st = {v.begin() , v.end()};
    if((int) st.size() == 1)
    {
        cout << -1 << "\n";
        return 0;
    }
    
    int cnt = 0;

    for(int i = 0 ; i < n ; ++i)
    {
        vector<int> ss;
        int k = v[i];
        for(int j = 0 ; j < n ; ++j)
        {
            if(i != j && k == v[j])
            {
                ss.push_back(v[j]);
            }
        }

        if((int)ss.size() + 1 == 2)
        {
            ++cnt;
        }
    }

    if(cnt == 0)
    {
        cout << -1 << "\n";
        return 0;
    }
    
    cout << cnt / 2 << "\n";
}