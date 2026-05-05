/*
 * Problem: 2057H
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2057/problem/H
 */
// Author : Raiz
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<string> vs;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define endl '
'
#define pb push_back
#define pf push_front
#define eb emplace_back
#define ff first
#define ss second
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define mt19937_64 mt_rand(chrono::steady_clock::now().time_since_epoch().count())
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
const int MOD = 998244353;
const int INF = 1000000007;
const ll LINF = 4e18;
const int MAXN = 400000;
vll arr, pre, suf;
vll stk;
vll push_right(vll &a, vll &out)
{
    int n = a.size();
    stk.clear();
    out.assign(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll cur = a[i] + out[i];
        stk.pb(i);
        while (cur)
        {
            if (stk.empty())
            {
                ll len = i + 1;
                out[i + 1] += cur / (len + 1) * len;
                cur -= cur / (len + 1) * (len + 1);
                if (cur)
                {
                    out[i + 1] += cur;
                    stk.pb(cur - 1);
                    cur = 0;
                }
            }
            else
            {
                ll j = stk.back();
                ll dist = i - j;
                if (cur > dist)
                {
                    out[i + 1] += dist;
                    stk.pop_back();
                    cur -= dist + 1;
                }
                else
                {
                    out[i + 1] += cur;
                    stk.back() = j + cur;
                    cur = 0;
                }
            }
        }
    }
    return out;
}
vll push_left(vll &a, vll &out)
{
    reverse(all(a));
    push_right(a, out);
    reverse(all(out));
    reverse(all(a));
    return out;
}
signed main()
{
    fastio;
#ifndef ONLINE_JUDGE
// freopen("input.txt","y",stdin);
// freopen("output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        arr.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        push_right(arr, pre);
        push_left(arr, suf);
        for (int i = 0; i < n; i++)
        {
            cout << pre[i] + arr[i] + suf[i + 1] << " ";
        }
        cout << endl;
    }
}