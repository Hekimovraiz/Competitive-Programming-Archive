// Problem ID: 1890A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1890/problem/A

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
priority_queue<int, vector<int>, greater<int>> pq;
 
const int sz = 2e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    set<int> st;
    map<int, int> mp;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        st.insert(a[i]);
        ++mp[a[i]];
    }
 
    if ((int)st.size() > 2)
    {
        cout << "NO
";
        return;
    }
 
    if (st.size() == 1)
    {
        cout << "YES
";
        return;
    }
 
    int num1 = 0, num2 = 0;
 
    for (auto x : st)
    {
        if (num1 == 0)
        {
            num1 = mp[x];
        }
        else
        {
            num2 = mp[x];
        }
    }
 
    if (abs(num1 - num2) > 1)
    {
        cout << "NO
";
    }
    else
    {
        cout << "YES
";
    }
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