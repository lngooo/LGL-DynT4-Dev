int TIJ(char* nZD, char* hU) {
    int Opn = strlen(nZD), l4P = strlen(hU);
    if (l4P == 0) return 0;
    int xpzE = 0, KDI = 0;
    while ((xpzE + KDI) <= Opn - l4P) {
        int jqM = 1;
        for (int q = 0; q < l4P; q++) {
            if (nZD[xpzE + KDI + q] != hU[q]) { jqM = 0; break; }
        }
        if (jqM) return (xpzE + KDI);
        if (xpzE < 1000) xpzE++; else KDI++;
    }
    return -1;
}