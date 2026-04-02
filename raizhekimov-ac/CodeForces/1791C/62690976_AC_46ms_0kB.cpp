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
    int n;
    string s;
    cin >> n >> s;
    deque<char> dq;
    for (auto c : s)
    {
        dq.push_back(c);
    }
    while(!dq.empty() && ((dq.front() == '0' && dq.back() == '1') || (dq.front() == '1' && dq.back() == '0')))
    {
        dq.pop_front();
        dq.pop_back();
    }
    cout << (int)dq.size() << '\n';
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