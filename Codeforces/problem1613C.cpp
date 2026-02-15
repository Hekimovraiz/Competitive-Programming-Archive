/*
 * Problem: 1613C
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/1613/C
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

const int INF = 1e18;
const int sz = 3e5 + 9;
int a[sz];

bool check(const int &k , const int &n , const int &h)
{
    int hp = k;
    for (int i = 1; i < n; ++i)
    {
        hp += min(a[i + 1] - a[i] , k);
    }
    return h <= hp;
}

void solve()
{
    int n, h;
    cin >> n >> h;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);
    int l = 1, r = 1e18, mid, best = 0;

    while(l <= r)
    {
        mid = l + (r - l) / 2;
        if (check(mid , n , h))
        {
            best = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << best << '\n';
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