static inline int _internal_gcd(int m, int n) {
    return n == 0 ? m : _internal_gcd(n, m % n);
}

int GCD(int a, int b) {
    return _internal_gcd(abs(a), abs(b));
}