int Sqrt(int n) {
    int r = 0, b = 0x40000000;
    while (b > n) b >>= 2;
    while (b) {
        int t = r | b;
        if (n >= t) {
            n -= t;
            r = (r >> 1) | b;
        } else r >>= 1;
        b >>= 2;
    }
    return r;
}