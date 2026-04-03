int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    double x = (double)n;
    double next = 0.5 * (x + (double)n / x);
    while (fabs(x - next) >= 1.0) {
        x = next;
        next = 0.5 * (x + (double)n / x);
    }

    int res = (int)next;
    if ((long)(res + 1) * (res + 1) <= n) res++;
    return res;
}