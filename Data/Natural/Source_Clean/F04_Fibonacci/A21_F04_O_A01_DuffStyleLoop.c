long Fibonacci(int n) {
    long a = 0, b = 1, t;
    int k = n;
    if (n == 0) return 0;
    if (n == 1) return 1;
    k--;
    do {
        t = a + b; a = b; b = t;
    } while (--k > 0);
    return b;
}