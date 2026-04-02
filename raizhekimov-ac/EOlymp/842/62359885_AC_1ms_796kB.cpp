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

bool  isPrime(int n)
{
    if(n <= 1) 
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    if(n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for(int i = 5 ; i * i <= n ; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 2; i * i <= n; ++i)
    {
        while(n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }

    if (n > 1)
    {
        v.push_back(n);
        n = 1;
    }

    sort(all(v));
    
    for (int i = 0; i < (int)v.size(); ++i)
    {
        cout << v[i] << "*\n"[i == (int)v.size() - 1];
    }
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

