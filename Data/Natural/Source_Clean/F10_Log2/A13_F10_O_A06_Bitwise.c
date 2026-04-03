int Log2(int n) {
    int k = -1;
    unsigned int v = 1;
    while (!(v > (unsigned int)n)) {
        v = v << 1;
        k = k + 1;
        if (v == 0) break;
    }
    return k;
}