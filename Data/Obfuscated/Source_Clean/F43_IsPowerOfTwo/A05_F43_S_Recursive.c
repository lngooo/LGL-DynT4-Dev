int gzh(unsigned int FxN) {
    if (FxN == 0) return 0;
    if (FxN == 1) return 1;
    if (FxN % 2 != 0) return 0;
    return gzh(FxN / 2);
}