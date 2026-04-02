#include <stdio.h>

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

int main() {
    long long n, k;
    scanf("%lld %lld", &n, &k);

    long long ansxor = 0, ansand = 0, ansor = 0;

    for (long long i = 1; i <= n; ++i) {
        for (long long j = i + 1; j <= n; ++j) {
            long long xor_val = i ^ j;
            long long and_val = i & j;
            long long or_val  = i | j;

            if (xor_val < k) ansxor = max(ansxor, xor_val);
            if (and_val < k) ansand = max(ansand, and_val);
            if (or_val  < k) ansor  = max(ansor, or_val);
        }
    }

    printf("%lld\n%lld\n%lld\n", ansand, ansor, ansxor);


// CPTTTTTTTTTTTTTTTTTTTTTTTT'ye yazdirdim , sonra demeyin ki, Raiz C bilir
    return 0;
}
