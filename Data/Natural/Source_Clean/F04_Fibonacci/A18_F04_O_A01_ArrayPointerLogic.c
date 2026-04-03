long Fibonacci(int n) {
    long v[2] = {0, 1};
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        v[i % 2] = v[0] + v[1];
    }
    return v[n % 2];
}