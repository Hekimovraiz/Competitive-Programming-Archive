// Problem ID: 1535A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1535/problem/A

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define all v.begin() , v.end()
#define v_i for(int i = 0 ; i < n ; ++i)
 
using namespace std;
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
void solve()
{
    int a , b , c , d; cin >> a >> b >> c >> d;
    int v[4] = {a , b , c , d};
    sort(v , v + 4);
 
    int k = v[3];
    int k1 = v[2];
 
    int s1 = max(a , b);
    int s2 = max(c , d);
 
    if((s1 == k && s2 == k1) || (s1 == k1 && s2 == k))
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
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}