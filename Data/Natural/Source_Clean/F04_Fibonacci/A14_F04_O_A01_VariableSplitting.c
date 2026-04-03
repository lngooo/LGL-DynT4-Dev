long Fibonacci(int n) {
    long a_low = 0, a_high = 0, b_low = 1, b_high = 0;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        long cur = (a_low + a_high) + (b_low + b_high);
        a_low = b_low; a_high = b_high;
        b_low = cur; b_high = 0;
    }
    return (n == 1) ? 1 : (b_low + b_high);
}