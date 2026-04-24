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
 
 
void solve()
{
    int n ; cin >> n;
    string s ; cin >> s;
    int k1 = 0 , k2 = 0;
    for(int i = 0 ; i < n ; ++i)
    {
        if(s[i] == 'L')
        {
            k1 -= 1;
        }
        else if(s[i] == 'R')
        {
            k1 += 1;
        }
        else if(s[i] == 'U')
        {
            k2 += 1;
        }
        else if(s[i] == 'D')
        {
            k2 -= 1;
        }
        if(k1 == 1 && k2 == 1)
        {
            cout << "YES
";
            return;
        }
    }
    cout << "NO
";
}
 
 
 
signed main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
 
    while(t--)
    {
        solve();
    }
} 