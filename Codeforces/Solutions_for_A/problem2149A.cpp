/*
 * Problem: 2149A - Be Positive
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2149/problem/A
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
 
const int sz = 1e5 + 3;
const int MOD = 1e9 + 7;
const int INF = 1e18;
int dp[sz], a[sz];
 
void solve()
{
    int n , one = 0, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            ++one;
        }
        else if (x == 0)
        {
            ++sum;
        }
    }
    if(one != 0 && one % 2 == 1)
    {
        sum += 2;
    }
    cout << sum << "
";
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