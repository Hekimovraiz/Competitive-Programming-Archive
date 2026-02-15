/*
 * Problem: 10126
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/10126
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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    sort(all(v));

    int l = 0, r = 0, cnt = 0;

    while (r < n)
    {
        if (v[r] - v[l] < k)
        {
            //cout << "++r\n";
            //cout << "++r: " << r << " v[r]: " << v[r] << " v[l]: " << v[l] << " v[r] - v[l]: " << v[r] - v[l] << '\n';
            ++r;
            //cout << endl;
        }
        else if (v[r] - v[l] > k)
        {
            //cout << "++r\n";
            //cout << "++l: " << l << "v[r]: " << v[r] << " v[l]: " << v[l] << " v[r] - v[l]: " << v[r] - v[l] << '\n';
            ++l;
            //cout << endl;
        }
        else if (v[r] - v[l] == k)
        {
            ++cnt;
            /// cout << "v[r]: " << v[r] << " v[l]: " << v[l] << " v[r] - v[l]: " << v[r] - v[l] << " k: " << k << "\n";
            ++r;
        }
    }

    cout << cnt << "\n";
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
