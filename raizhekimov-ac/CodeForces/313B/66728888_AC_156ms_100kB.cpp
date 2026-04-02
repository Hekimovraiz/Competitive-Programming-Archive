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
    string s ; cin >> s;
    int t; cin >> t;
    vector<int> dp((int) s.size());


    for(int i = 0 ; i < (int) s.size() ; ++i)
    {
        dp[i] = dp[i -1] + (s[i] == s[i - 1]);
    }

    while(t--)
    {
        int a , b ; cin >> a >>  b;
        int cnt = 0;

        cout << dp[b - 1] - dp[a - 1] << "\n";
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