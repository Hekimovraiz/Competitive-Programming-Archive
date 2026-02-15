/*
 * Problem: 10364
 * Platform: EOlymp
 * Link: https://www.eolymp.com/az/problems/10364
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

const int sz = 103;
const int MOD = 1e9 + 7;
const int INF = 1e18;

int n, a[sz];

void solve()
{
    int num1, num2, num3, num4, num5, num6, num7;
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

    int a = min({num1 , num2 , num3 , num4 , num5 , num6 , num7});
    int a_b_c = max({num1 , num2 , num3 , num4 , num5 , num6 , num7});
    int b_c = a_b_c - a;

    vector<int> v = {num1 , num2 , num3 , num4 , num5 , num6 , num7};

    for(auto x : v)
    {
        if(count(all(v) , b_c - x))
        {
            cout << a << " " << min(b_c - x , x) << " " << max(b_c - x , x) << "\n";
            return;
        }
    }

    // a = min({all_7_nums})
    // a + b + c = max({all_7_nums}) => min({all_7_nums}) + b + c = max({all_7_nums}) 
    // b + c = max({all_7_nums}) - min({all_7_nums})


    // (a) + (b) + (c) + (a + b) + (b + c) + (c + a) + (a + b + c) = a + b + c + a + b + b + c + c + a + a + b + c = 4a + 4b + 4c = 4(a + b + c)
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