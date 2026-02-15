/*
 * Problem: 12479
 * Platform: QOJ
 * Link: https://qoj.ac/problem/12479
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

const int sz = 1e6 + 5;
const int MOD = 1000003;
const int INF = 1e18;
int a[sz], dp[sz];
int Case = 1;

void solve()
{
    int n;
    cin >> n;

    deque<int> dq;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    int cnt = 1;
    pair<int, int> min_el;

    if (dq.back() < dq.front())
    {
        min_el.first = dq.back();
        dq.pop_back();
    }
    else
    {
        min_el.first = dq.front();
        dq.pop_front();
    }

    while (!dq.empty())
    {
        if (dq.front() < dq.back())
        {
            min_el.second = dq.front();
            dq.pop_front();
        }
        else
        {
            min_el.second = dq.back();
            dq.pop_back();
        }
        if(min_el.first <= min_el.second)
        {
            ++cnt;
            min_el.first = min_el.second;
        }
    }

    cout << "Case #" << Case++ << ": " << cnt << "\n";
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