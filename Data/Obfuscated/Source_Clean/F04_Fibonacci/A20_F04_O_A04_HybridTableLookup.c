long ZfU(int fBM0) {
    long Is[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    if (fBM0 <= 9) return Is[fBM0];
    return ZfU(fBM0 - 1) + ZfU(fBM0 - 2);
}