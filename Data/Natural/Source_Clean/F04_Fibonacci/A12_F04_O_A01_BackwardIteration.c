long Fibonacci(int n) {
    long a = 0, b = 1;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (int i = n; i >= 2; i--) {
        long t = a + b; a = b; b = t;
    }
    return b;
}