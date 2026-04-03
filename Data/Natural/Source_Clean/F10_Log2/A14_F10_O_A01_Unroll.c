int Log2(int n) {
    int r = 0;
    while (n >= 4) { n >>= 2; r += 2; }
    while (n >= 2) { n >>= 1; r += 1; }
    return r;
}