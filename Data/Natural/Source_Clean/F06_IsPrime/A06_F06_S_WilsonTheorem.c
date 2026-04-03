int IsPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    long long fact = 1;
    for (int i = 2; i < n; i++) {
        fact = (fact * i) % n;
    }
    return (fact == n - 1);
}