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
    for(auto &i : v)
    {
        cin >> i;
    }

    int qr; cin >> qr;
    
    auto check = [&](int x, int f) -> bool
    {
        return v[x] >= f;
    };

    while (qr--)
    {
        int k;
        cin >> k;
        int l = 0, r = n - 1, best = 0, mid;
        while (l <= r)
        {
            mid = (r + l) / 2;
            if (check(mid, k))
            {
                best = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << (v[best] == k ? "YES \n" : "NO\n");
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
