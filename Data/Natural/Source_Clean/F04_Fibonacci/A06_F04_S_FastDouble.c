long Fibonacci(int n) {
    if (n == 0) return 0;
    long a = 0, b = 1;
    for (int i = 31 - __builtin_clz(n); i >= 0; i--) {
        long c = a * (2 * b - a);
        long d = a * a + b * b;
        a = c; b = d;
        if ((n >> i) & 1) {
            long t = a + b;
            a = b; b = t;
        }
    }
    return a;
}