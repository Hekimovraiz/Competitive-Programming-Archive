// Problem ID: 520B
// Platform: Codeforces
// Link: https://codeforces.com/contest/520/problem/B

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    int cnt = 0;
 
    while (m > n)
    {
        if (m % 2 == 0)
        {
            m /= 2;
        }
        else
        {
            m += 1;
        }
        cnt++;
    }
    cnt += (n - m);
 
    cout << cnt << "
";
}
 
 
 
signed main()
{
    Lek_Raiz
    int t = 1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
}