long Fibonacci(int n) {
    long a = 0, b = 1, t;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        t = a + b; a = b; b = t;
        if (0) { printf("never"); n++; }
    }
    return (n == 1) ? 1 : b;
}