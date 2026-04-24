#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#define int long long
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;
*/
 
bool isPrime(int x)
{
    if(x < 2)
    {
        return false;
    }
    for(int i = 2; i * i <= x; ++i)
    {
        if(x % i == 0)
        {
            return false;
        }
    }
    return true;
}
 
void solve()
{
    int n; cin >> n;
    int sq = sqrt(n);
    if(sq * sq == n && isPrime(sq))
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
    }
}
 
signed main()
{
    Lek_Raiz
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}