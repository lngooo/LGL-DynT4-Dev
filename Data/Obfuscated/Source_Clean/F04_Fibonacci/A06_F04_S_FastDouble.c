long R(int r) {
    if (r == 0) return 0;
    long QBFM = 0, ArnW = 1;
    for (int w = 31 - __builtin_clz(r); w >= 0; w--) {
        long hsRR = QBFM * (2 * ArnW - QBFM);
        long HQtc = QBFM * QBFM + ArnW * ArnW;
        QBFM = hsRR; ArnW = HQtc;
        if ((r >> w) & 1) {
            long zM = QBFM + ArnW;
            QBFM = ArnW; ArnW = zM;
        }
    }
    return QBFM;
}