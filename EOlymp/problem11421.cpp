/*
 * Problem: 11421
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/11421
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> v(m);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> v[i];
    }
    sort(all(a));
    sort(all(v));

    int i = 0, j = 0, cnt = 0;
    while (i < n && j < m)
    {
        if (v[j] >= a[i] - k && v[j] <= a[i] + k)
        {
            cnt++;
            i++;
            j++;
        }
        else if (v[j] < a[i] - k)
        {
            j++;
        }
        else
        {
            i++;
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