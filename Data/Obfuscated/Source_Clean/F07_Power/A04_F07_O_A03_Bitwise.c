int h(int wt, int exp) {
    int DYn = 1;
    while (exp > 0) {
        if (exp & 1) DYn *= wt;
        wt *= wt;
        exp >>= 1;
    }
    return DYn;
}