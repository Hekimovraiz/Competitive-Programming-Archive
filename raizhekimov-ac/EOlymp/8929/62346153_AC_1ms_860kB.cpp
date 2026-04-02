#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>

#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
//#define min(x) *min_element(x.begin() , x.end())
#define all(v) v.begin() , v.end()


using namespace std;    
using namespace __gnu_pbds;

template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool isPrime(int x)
{
    if(x <= 1)
    {
        return false;
    }
    if(x == 2)
    {
        return true;
    }
    if(x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }

    for(int i = 5 ; i * i <= x ; i += 6)
    {
        if(x % i == 0 || x % (i + 2) == 0)
        {
            return false;
        }
    } 
    return true;
}

void solve()
{
    int n ; cin >> n;

    cout << (isPrime(n) ? 1 : 0) << "\n";
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

