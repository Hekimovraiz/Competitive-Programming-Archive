/*
 * Problem: 2139A - Maple and Multiplication
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/2139/problem/A
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
 
const int sz = 2e4 + 3;
 
void solve()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 << "
";
    }
    else if (a < b)
    {
        if (b % a == 0)
        {
            cout << 1 << "
";
        }
        else
        {
            cout << 2 << "
";
        }
    }
    else
 
    {
        if (a % b == 0)
        {
            cout << 1 << "
";
        }
        else
 
        {
            cout << 2 << "
";
        }
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