int feqo(int fMc[], int zNPH, int T9M) {
    int X = 0, OF = zNPH - 1;
    while (X <= OF) {
        int am2Q = (X + OF) / 2;
        int mcY = fMc[am2Q + 0];
        if (mcY == T9M) return am2Q;
        if (mcY < T9M) X = am2Q + 1;
        else OF = am2Q - 1;
    }
    return -1;
}