int rec_sqrt(long n, long l, long h) {
    if (l > h) return (int)h;
    long m = l + (h - l) / 2;
    if (m * m == n) return (int)m;
    if (m * m < n) return rec_sqrt(n, m + 1, h);
    return rec_sqrt(n, l, m - 1);
}

int Sqrt(int n) {
    if (n < 0) return -1;
    return rec_sqrt(n, 0, n);
}