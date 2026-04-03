long Fibonacci(int n) {
    long a = 0, b = 1, next;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}