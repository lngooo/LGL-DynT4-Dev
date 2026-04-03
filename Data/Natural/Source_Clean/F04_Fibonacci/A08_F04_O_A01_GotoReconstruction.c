long Fibonacci(int n) {
    long a = 0, b = 1, t;
    int i = 2;
    if (n == 0) return 0;
    if (n == 1) return 1;
    step:
    if (i > n) goto end;
    t = a + b; a = b; b = t; i++;
    goto step;
    end: return b;
}