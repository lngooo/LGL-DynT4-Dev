int Log2(int n) {
    if (n < 2) return 0;
    int prev = Log2(n >> 1);
    return ++prev;
}