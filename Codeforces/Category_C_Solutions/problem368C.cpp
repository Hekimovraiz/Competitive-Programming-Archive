/*
 * Problem: 368C
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/368/C
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);

using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    string s; cin >> s;
    int n = s.size();
    vector<int> k(n + 1, 0);

    for(int i = 0; i + 2 < n; i++)
    {
        string t = s.substr(i, 3);
        if(t != "zyx" && t != "xzy" && t != "yxz")
            k[i + 1] = 1;
    }

    for(int i = 1; i <= n; i++)
        k[i] += k[i - 1];

    int m; cin >> m;
    while(m--)
    {
        int l, r; cin >> l >> r;
        if(r - l + 1 < 3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << ((k[r - 2] - k[l - 1]) > 0 ? "YES\n" : "NO\n");
        }
    }
}

signed main()
{
    Lek_Raiz
    int t = 1;
    while(t--) solve();
}
