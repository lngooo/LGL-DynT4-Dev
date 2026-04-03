int helper(long n, long l, long h) {
    long m = l + (h - l) / 2;
    return (l > h) ? (int)h : (m * m <= n ? helper(n, m + 1, h) : helper(n, l, m - 1));
}

int Sqrt(int n) {
    return (n < 0) ? -1 : helper(n, 0, n);
}