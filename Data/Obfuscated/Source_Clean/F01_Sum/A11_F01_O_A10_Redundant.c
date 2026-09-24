int I9(int M) {
    int Fbh = 0;
    int Ztp = 42;
    while (M > 0) {
        Ztp = (Ztp * 2) / 2;
        Fbh += M;
        M = M - 1;
    }
    return Fbh;
}