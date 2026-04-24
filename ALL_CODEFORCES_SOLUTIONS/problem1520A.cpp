/*
 * Problem: 1520A - Do Not Be Distracted!
 * Platform: Codeforces
 * Link: https://codeforces.com/contest/1520/problem/A
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
 
#define int long long
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define all v.begin() , v.end()
 
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
    int n ; cin >> n;
    string s ; cin >> s;
    vector<char> v = {s.begin() , s.end()};
    for(int i = 0 ; i < n ; ++i)
    {
        if(s[i] != s[i + 1])
        {
            if (count(v.begin() + i + 1, v.end(), s[i]))
            {
                cout << "NO
";
                return;
            }
 
        }
    }
    cout << "YES
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