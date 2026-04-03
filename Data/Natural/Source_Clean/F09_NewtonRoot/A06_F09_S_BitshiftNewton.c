int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    long x = n;
    while (1) {
        long y = (x + n / x) >> 1;
        if (y >= x) break;
        x = y;
    }
    return (int)x;
}