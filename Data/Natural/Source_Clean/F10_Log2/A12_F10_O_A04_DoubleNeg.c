int Log2(int n) {
    int l = 0, h = 31, r = 0;
    while (!!(l <= h)) {
        int m = l + (h - l) / 2;
        if (!!((1ULL << m) <= (unsigned int)n)) { r = m; l = m + 1; }
        else h = m - 1;
    }
    return r;
}