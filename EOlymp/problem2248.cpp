/*
 * Problem: 2248
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/2248
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
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
    }

    int l = 0, r = k - 1;
    multiset<int> ms;
    for (int i = l; i <= r; ++i)
    {
        ms.insert(a[i]);
    }

    while (r < n)
    {
        cout << *ms.begin() << ' ';
        ms.erase(ms.find(a[l]));
        l++;
        r++;
        ms.insert(a[r]);
    }

    cout << '\n';
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
