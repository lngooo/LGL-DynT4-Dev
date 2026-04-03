long long power(long long base, long long exp, long long mod) {
    long long res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

int IsPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;

    if (power(2, n - 1, n) != 1) return 0;

    for (int i = 2; i * i <= n; i++) if (n % i == 0) return 0;
    return 1;
}