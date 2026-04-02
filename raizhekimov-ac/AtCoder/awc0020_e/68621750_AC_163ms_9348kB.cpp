// --------------------
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
#define all(obj) (obj).begin(), (obj).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, s, n) for (int i = (int)(s); i <= (int)(n); i++)
const int INF = 1e9;
const ll INFLL = 1e18;
template <typename T>
bool chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
        return true;
    }
    return false;
}
template <typename T>
bool chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
        return true;
    }
    return false;
}
// --------------------

int op(int a, int b)
{
    return min(a, b);
}
int e()
{
    return INF * 2;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vi w(n);
    rep(i, n) cin >> w[i];
    vector<pair<int, int>> c(m);
    rep(i, m) cin >> c[i].first, c[i].second = i;
    sort(all(c));
    vi idx(m);
    rep(i, m) idx[c[i].second] = i;
    segtree<int, op, e> seg(m);
    rep(i, m) seg.set(i, c[i].second);
    int cnt = 0;
    for (const auto &wi : w)
    {
        int i = lower_bound(all(c), pair<int, int>(wi, -1)) - c.begin();
        int p = seg.prod(i, m);
        if (p > INF)
            continue;
        cnt++;
        seg.set(idx[p], INF + 10);
    }
    cout << cnt << '\n';

    return 0;
}