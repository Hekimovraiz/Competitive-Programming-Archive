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

const int sz = 1e3 + 1;
const int MOD = 1000003;
const int INF = 1e18;
int dp[sz], a[sz];
string n;

bool check(int k)
{
    if (k < 3)
    {
        return false;
    }
    
    map<char, int> cnt;
    int d = 0;

    for (int i = 0; i < k; i++)
    {
        if (++cnt[n[i]] == 1)
        {
            d++;
        }
    }
    if (cnt['1'] > 0 && cnt['2'] > 0 && cnt['3'] > 0)
    {
        return true;
    }

    for (int i = k; i < (int)n.size(); i++)
    {
        cnt[n[i - k]]--;
        if (cnt[n[i - k]] == 0)
        {
            d--;
        }
        if (++cnt[n[i]] == 1)
        {
            d++;
        }
        if (cnt['1'] > 0 && cnt['2'] > 0 && cnt['3'] > 0)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    cin >> n;
    int l = 3, r = (int)n.size(), ans = 0;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << '\n';
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
