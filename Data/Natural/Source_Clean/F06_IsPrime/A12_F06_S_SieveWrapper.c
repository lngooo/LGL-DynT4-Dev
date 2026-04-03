int IsPrime(int n) {
    if (n < 2) return 0;
    char *sieve = (char *)malloc(n + 1);
    memset(sieve, 1, n + 1);
    for (int p = 2; p * p <= n; p++) {
        if (sieve[p]) {
            for (int i = p * p; i <= n; i += p) sieve[i] = 0;
        }
    }
    int res = sieve[n];
    free(sieve);
    return res;
}