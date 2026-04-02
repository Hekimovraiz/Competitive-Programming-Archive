/*
 * Problem: 2044B - Normal Problem
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/2044/B
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())

using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    string s ; cin >> s;
    reverse(s.begin() , s.end());
    for(int i = 0 ; i < (int) s.size() ; ++i)
    {
        if(s[i] == 'q')
        {
            cout << 'p';
        }
        else if(s[i] == 'p')
        {
            cout << 'q';
        }
        else
        {
            cout << "w";
        }
    }
    cout << "\n";
}


signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }
}

