long Fibonacci(int n) {
    long x = 0, y = 1;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        y = x + y; x = y - x;
    }
    return (n == 1) ? 1 : y;
}