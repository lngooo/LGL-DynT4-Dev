int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = n, y;
    void *targets[] = {&&iterate, &&finish};
iterate:
    y = (x + n / x) >> 1;
    int idx = (y >= x);
    if (idx == 0) { x = y; goto *targets[0]; }
finish:
    return (int)x;
}