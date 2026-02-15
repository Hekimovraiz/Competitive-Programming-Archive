/*
 * Problem: 3161
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/3161
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

const int sz = 150000 + 2;
const int MOD = 1000003;
const int INF = 1e18;
vector<deque<int>> dqs(sz);

void solve()
{
    int qr;
    cin >> qr;

    while (qr--)
    {
        str k;
        cin >> k;
        if (k == "pushfront")
        {
            int f, num;
            cin >> f >> num;
            dqs[f].pf(num);
        }
        else if (k == "pushback")
        {
            int f, num;
            cin >> f >> num;
            dqs[f].pb(num);
        }
        else if (k == "popfront")
        {
            int f;
            cin >> f;
            cout << dqs[f].front() << "\n";
            dqs[f].pop_front();
        }
        else if (k == "popback")
        {
            int f;
            cin >> f;
            cout << dqs[f].back() << "\n";
            dqs[f].pop_back();
        }
    }
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