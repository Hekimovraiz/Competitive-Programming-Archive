/*
 * Problem: 11389
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/11389
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
#define pb push_back
#define ep emplace_back

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    string s;
    cin >> s;
    int l = 0, r = (int)s.size() - 1;
    while (l <= r)
    {
        if ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))
        {
            ++l;
            --r;
        }
        else
        {
            break;
        }
    }
    if (l > r)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << r - l + 1 << "\n";
    }
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