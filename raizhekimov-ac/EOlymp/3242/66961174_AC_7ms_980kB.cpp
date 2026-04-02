#include <bits/stdc++.h>
using namespace std;

using u128 = __uint128_t;
using ll = long long;

ll mul(ll a, ll b, ll mod)
{
    return (u128)a * b % mod;
}

ll binpow(ll a, ll e, ll mod)
{
    ll r = 1;
    while (e)
    {
        if (e & 1) r = mul(r, a, mod);
        a = mul(a, a, mod);
        e >>= 1;
    }
    return r;
}

bool isPrime(ll n)
{
    if (n < 2) return false;
    for (ll p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
    {
        if (n == p) return true;
        if (n % p == 0) return n == p;
    }

    ll d = n - 1, s = 0;
    while ((d & 1) == 0)
    {
        d >>= 1;
        s++;
    }

    for (ll a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022})
    {
        if (a % n == 0) continue;
        ll x = binpow(a, d, n);
        if (x == 1 || x == n - 1) continue;
        bool comp = true;
        for (int r = 1; r < s; r++)
        {
            x = mul(x, x, n);
            if (x == n - 1)
            {
                comp = false;
                break;
            }
        }
        if (comp) return false;
    }
    return true;
}

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

ll Pollard(ll n)
{
    if (n % 2 == 0) return 2;
    if (n % 3 == 0) return 3;

    ll c = uniform_int_distribution<ll>(1, n - 1)(rng);
    ll x = uniform_int_distribution<ll>(0, n - 1)(rng);
    ll y = x;
    ll d = 1;

    auto f = [&](ll x)
    {
        return (mul(x, x, n) + c) % n;
    };

    while (d == 1)
    {
        x = f(x);
        y = f(f(y));
        d = gcd(abs(x - y), n);
    }

    if (d == n) return Pollard(n);
    return d;
}

void factor(ll n, map<ll, ll> &mp)
{
    if (n == 1) return;
    if (isPrime(n))
    {
        mp[n]++;
        return;
    }
    ll d = Pollard(n);
    factor(d, mp);
    factor(n / d, mp);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    map<ll, ll> mp;
    factor(n, mp);

    long long ans = 1;
    for (auto [p, a] : mp)
        ans *= (2 * a + 1);

    cout << ans << "\n";
}
