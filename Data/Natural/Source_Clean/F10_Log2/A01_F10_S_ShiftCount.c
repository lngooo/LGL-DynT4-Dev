int Log2(int n) {
    int res = 0;
    while (n >>= 1) res++;
    return res;
}