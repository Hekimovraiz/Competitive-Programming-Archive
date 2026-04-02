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

const int sz = 2e4 + 3;

void solve()
{
    int m, n;
    cin >> m >> n;
    string s;
    cin >> s;
    int sum = 0;
    int a = (count(all(s), 'A') >= n ? 0 : n - count(all(s), 'A')) + (count(all(s), 'B') >= n ? 0 : n - count(all(s), 'B')) +
    (count(all(s), 'C') >= n ? 0 : n - count(all(s), 'C')) + (count(all(s), 'D') >= n ? 0 : n - count(all(s), 'D')) +
    (count(all(s), 'E') >= n ? 0 : n - count(all(s), 'E')) + 
    (count(all(s), 'F') >= n ? 0 : n - count(all(s), 'F')) + (count(all(s), 'G') >= n ? 0 : n - count(all(s), 'G'));
    cout << a << '\n';
}
signed main()
{
    Lek_Raiz;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
