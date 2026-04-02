/*
 * Problem: 25A - IQ test
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/25/A
 */

#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0) ; cin.tie(nullptr) ; cout.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }
    int odd = 0 , even = 0;
    for(auto i : v)
    {
        if(i % 2 != 0)
        {
            even++;
        }
        else
        {
            ++odd;
        }
    }
    if(odd == 1)
    {
        for(int i = 0 ; i < (int)v.size() ; ++i)
        {
            if(v[i] % 2 != 1)
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    else
    {
        for(int i = 0 ; i < (int)v.size() ; ++i)
        {
            if(v[i] % 2 != 0)
            {
                cout << i + 1<< "\n";
                break;
            }
        }
    }
}
