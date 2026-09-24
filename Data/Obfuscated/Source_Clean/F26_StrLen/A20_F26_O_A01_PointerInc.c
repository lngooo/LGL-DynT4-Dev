int xL(const char *zTVc) {
    int PYC = 0;
    while (*(zTVc++)) PYC++;
    return PYC;
}