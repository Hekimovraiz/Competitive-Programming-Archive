/*
 * Problem: 10282
 * Platform: UVA
 * Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=8&problem=10282
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
#define pf push_front
#define ep emplace_back
#define pii pair<int, int>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int sz = 1e6 + 3;
const int MOD = 1e9 + 7;
const int INF = 1e18;

str a, b, c;
map<str, pair<str, bool>> mp;
vector<str> v;

void solve()
{
    while (cin >> a >> b && a != "" && b != "")
    {
        mp[b].first = a;
    }

    while (cin >> c)
    {
        v.pb(c);
    }
    for (int i = 0; i < (int)v.size(); ++i)
    {
        c = v[i];
        if (mp[c].second)
        {
            cout << mp[c].first;
        }
        else
        {
            cout << "eh\n";
        }
    }
    /*for(auto [s , ss] : mp)
    {
        cout << s << " " << ss << "\n";
    }*/
}

signed main()
{
    Lek_Raiz;
    int t = 1;
    /// cin >> t;
    while (t--)
    {
        solve();
    }
}