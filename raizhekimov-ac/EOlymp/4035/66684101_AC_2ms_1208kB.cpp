// Author: Raiz
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
/// #include "__Lek_Raiz.h"

#define int long long
#define Lek_Raiz                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
/// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

const int sz = 10005;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int n, k;
vector<int> a(sz);

bool check(int mid)
{
    int lst = a[0], cnt = 1;

    for (int i = 1; i < n; ++i)
    {
        if (a[i] - lst >= mid)
        {
            ++cnt;
            lst = a[i];
        }
        if (cnt == k)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    cin >> n >> k;

    for (auto &x : a)
    {
        cin >> x;
    }

    int l = 0, r = 1e18, best = 0, mid = 0;

    while (l <= r)
    {
        mid = l + (r - l) / 2;


        if (check(mid))
        {
            best = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << best << "\n";
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