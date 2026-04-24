// Problem ID: 2148C
// Platform: Codeforces
// Link: https://codeforces.com/contest/2148/problem/C

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
 
void solve()
{
    int n , m ; cin >> n >> m;\
    int sum = 0 , f = 0 , s = 0;
 
    while(n -- )
    {
        int a1 , b1;
        cin >> a1 >> b1;
        if(abs(b1 - f) == 1)
        {
            sum += a1 - s - ((a1 - s ) % 2 == 0 ? 1 : 0);
            //cout << "f: " << f  << " s: " << s << " a1 : " << a1 << " b1: " << b1  << " as1 : "  << a1 - s - ((a1 - s ) % 2 == 0 ? 1 : 0) << " sum:" << sum <<'
';
        }
        else
        {
            sum += ((a1 - s) % 2 == 0 ? a1 - s : a1 - s - 1);
            //cout << "f: " << f  << " s: " << s << " a1 : " << a1 << " b1: " << b1  << " as2 : "  << ((a1 - s) % 2 == 0 ? a1 - s : a1 - s - 1) << " sum:" << sum << '
';
        }
    
        s = a1; f = b1;
    }
 
    sum += m - s;
    //cout << "m - s: " << m - s << "
";
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