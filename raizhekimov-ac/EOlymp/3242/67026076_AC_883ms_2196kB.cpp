#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> primes;

// Precompute small primes for fast factorization
void sieve(int N = 1000000)
{
    vector<bool> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= N; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;

    for (int i = 2; i <= N; ++i)
        if (is_prime[i])
            primes.push_back(i);
}

// Solve function
void solve()
{
    int n;
    cin >> n;
    int ans = 1;

    // Check 2,3,5 separately using bit tricks
    vector<int> first = {2, 3, 5};
    for (int p : first)
    {
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                if (p == 2) n >>= 1;
                else n /= p;
                ++cnt;
            }
            ans *= (2 * cnt + 1);
        }
    }

    // Small primes from sieve
    for (int p : primes)
    {
        if (p <= 5) continue; // already handled
        if ((long long)p * p > n) break;
        if (n % p == 0)
        {
            int cnt = 0;
            while (n % p == 0)
            {
                n /= p;
                ++cnt;
            }
            ans *= (2 * cnt + 1);
        }
    }

    // Advanced wheel 30k trick for remaining n
    int wheel[] = {1,7,11,13,17,19,23,29}; // offsets modulo 30
    long long start = 31;
    while ((long long)start * start <= n)
    {
        for (int offset : wheel)
        {
            int p = start + offset - 1; // actual prime candidate
            if (p * p > n) break;
            if (n % p == 0)
            {
                int cnt = 0;
                while (n % p == 0)
                {
                    n /= p;
                    ++cnt;
                }
                ans *= (2 * cnt + 1);
            }
            if (n == 1) break;
        }
        if (n == 1) break;
        start += 30;
    }

    // Remaining prime factor
    if (n > 1) ans *= 3;

    cout << ans << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve(); // precompute small primes
    solve();
}
