int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = 1;

    while ((x << 2) <= n) x <<= 1;
    long y = (x + n / x) >> 1;
    while (y < x) {
        x = y;
        y = (x + n / x) >> 1;
    }

    if ((x + 1) * (x + 1) <= n) x++;
    return (int)x;
}