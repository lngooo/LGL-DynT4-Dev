long Fibonacci(int n) {
    if (n == 0) return 0;
    long a = 0, b = 1;
    for (int m = 1 << (31 - __builtin_clz(n)); m > 0; m >>= 1) {
        long t1 = a * ((b << 1) - a), t2 = a * a + b * b;
        a = t1; b = t2;
        if (n & m) {
            long s = a + b; a = b; b = s;
        }
    }
    return a;
}