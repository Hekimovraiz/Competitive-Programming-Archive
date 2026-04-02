/*
 * Problem: 364D
 * Platform: Codeforces
 * Link: https://codeforces.com/problemset/problem/364/D
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

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

const int sz = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;

map<int, vector<int>> mp;

vector<int> fact(int x)
{
    if (mp.find(x) != mp.end())
    {
        return mp[x];
    }

    vector<int> divs;
    for (int i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
        {
            divs.ep(i);
            if (i != x / i)
            {
                divs.ep(x / i);
            }
        }
    }

    mp[x] = divs;
    return divs;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    int cvb = 1, lazm = (n + 2 - 1) / 2;

    for (int _ = 0; _ < 5; ++_)
    {
        int rand1 = rng() % n;
        vector<int> divs = fact(v[rand1]);

        for (int i = 0; i < (int)divs.size(); ++i)
        {
            int cnt = 0;
            for (int j = 0; j < n; ++j)
            {
                if (v[j] % divs[i] == 0)
                {
                    ++cnt;
                    if (cnt >= lazm)
                    {
                        break;
                    }
                }
            }
            if (cnt >= lazm)
            {
                cvb = max(cvb, divs[i]);
            }
        }
    }

    cout << cvb << "\n";
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