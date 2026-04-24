/*
 * Problem: 2137A - Collatz Conjecture
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2137/problem/A
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
 
const int sz = 5e3 + 3;
const int MOD = 1e9 + 7;
const int INF = 1e18;
 
map<int, bool> mp;
map<int, pair<int, vector<int>>> mpp;
bool flag = true;
 
 
void solve()
{
    int k , x ; 
    cin >> k >> x;
    
    cout << x * (1LL << k) << "
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