int Log2(int n) {
    int res = 0;
    if (n <= 1) return 0;
    while (1) {
        n /= 2;
        if (n == 0) break;
        res++;
    }
    return res;
}