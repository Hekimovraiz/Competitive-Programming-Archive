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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        mp[v[i]].pb(i + 1);
    }

    int qr;
    cin >> qr;
    string ans = "";

    while (qr--)
    {
        int l, r, k;
        cin >> l >> r >> k;

        if (mp.find(k) == mp.end())
        {
            ans += "0";
        }
        else
        {
            auto &v2 = mp[k];
            auto lb = lower_bound(all(v2) , l);
            if(lb != v2.end() && *lb <= r)
            {
                ans += "1";
            }
            else
            {
                ans += "0";
            }
        }
    }
    cout << ans << "\n";
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