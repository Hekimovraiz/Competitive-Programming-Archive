/*
 * Problem: 10218
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/10218
 */

// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
/// #include "__Lek_Raiz.h"

#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define ll long long
#define str string
#define pb push_back
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 1e6 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

map<int , int> mp;

void fact(int a, int b)
{
    int mx = -INF , num = 0;
    for (int _ = a; _ <= b; ++_)
    {
        set<int> st;
        for (int i = 1; i * i <= _; ++i)
        {
            if (_ % i == 0)
            {
                st.insert(i);
                if (i != _ / i)
                {
                    st.insert(_ / i);
                }
            }
        }
        ++mp[*st.end()];
        if( mp[*st.end()] > mx)
        {
            mx = max(mx , mp[*st.end()]);
            num = *st.end();
        }
    }
    
    cout << num<<" "<< mx << "\n";
}

void solve()
{
    int a , b;
    cin >> a >> b;
    fact(a, b);
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}