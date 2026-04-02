/*
 * Problem: 766B
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/766/B
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define ll long long
#define str string

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 2e4 + 3;

void solve()
{
    int n ; cin >> n;
    vector<int> v(n);
    for(auto &i : v)
    {
        cin >> i;
    }
    sort(all(v));
    for(int i = 0 ; i <= n - 3 ; ++i)
    {
        if(v[i] + v[i + 1] > v[i + 2] && v[i] + v[i + 2] > v[i + 1] && v[i + 1] + v[i + 2] > v[i])
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
}
