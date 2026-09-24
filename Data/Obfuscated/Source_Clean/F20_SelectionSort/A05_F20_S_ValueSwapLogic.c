void p(int fKK[], int K) {
    int cduf, awW;
    for (cduf = 0; cduf < K; cduf++) {
        int zGm = fKK[cduf];
        int WzU = cduf;
        for (awW = cduf + 1; awW < K; awW++) {
            if (fKK[awW] < zGm) {
                zGm = fKK[awW];
                WzU = awW;
            }
        }
        fKK[WzU] = fKK[cduf];
        fKK[cduf] = zGm;
    }
}