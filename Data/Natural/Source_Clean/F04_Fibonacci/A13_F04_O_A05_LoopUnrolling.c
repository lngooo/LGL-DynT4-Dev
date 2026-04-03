long Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    long a = 0, b = 1;
    int i = 2;
    for (; i <= n - 1; i += 2) {
        a = a + b; b = a + b;
    }
    if (i <= n) {
        long t = a + b; a = b; b = t;
    }
    return b;
}