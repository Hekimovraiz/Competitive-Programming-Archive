// Problem ID: 1352A
// Platform: Codeforces
// Link: https://codeforces.com/contest/1352/problem/A

#include <bits/stdc++.h>
#define Lek_Raiz ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_set = tree<T , null_type , less<T> , rb_tree_tag, tree_order_statistics_node_update>;
 
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v;
 
    while(n > 0)
    {
        string str = to_string(n);
        string tmp;
        tmp += str[0];
        for (int i = 1; i <= (int)str.size() - 1; ++i)
        {
            tmp += "0";
        }
        int val = stoll(tmp);
        v.push_back(val);
        n -= val;
    }
 
    cout << (int)v.size() << '
';
    for (int i = 0; i < (int)v.size(); ++i)
    {
        cout << v[i] << " 
"[i == (int)v.size() - 1];
    }
}
 
 
 
 
int main()
{
    Lek_Raiz
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
 