long nr_helper(long x, int n) {
    long next = (x + n / x) / 2;
    if (next >= x) return x;
    return nr_helper(next, n);
}

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    return (int)nr_helper(n, n);
}