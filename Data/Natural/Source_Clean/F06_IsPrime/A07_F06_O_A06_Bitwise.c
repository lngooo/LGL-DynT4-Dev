int IsPrime(int n) {
    if (n < 2) return 0;
    long long f = 1;
    for (int i = 1; i < n; i++) {
        long long t = 0;
        for(int j=0; j<i; j++) t = (t + f) % n;
        f = t;
    }
    return (f == (long long)n - 1);
}