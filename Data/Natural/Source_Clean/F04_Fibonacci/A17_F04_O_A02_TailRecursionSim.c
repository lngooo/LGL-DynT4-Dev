long Fibonacci(int n) {
    long a = 0, b = 1, t;
    r_step:
    if (n == 0) return a;
    if (n == 1) return b;
    t = a + b; a = b; b = t; n--;
    goto r_step;
}