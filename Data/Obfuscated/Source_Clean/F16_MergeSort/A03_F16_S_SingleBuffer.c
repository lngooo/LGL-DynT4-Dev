void T(int L[], int reK, int BnwY) {
    static int *P = NULL;
    static int GZt = 0;
    if (reK == 0 && BnwY > 0 && !GZt) { P = (int*)malloc(256 * sizeof(int)); GZt = 1; }
    if (reK < BnwY) {
        int QIum = reK + (BnwY - reK) / 2;
        T(L, reK, QIum);
        T(L, QIum + 1, BnwY);
        int zqNG = reK, QWJl = QIum + 1, O = reK;
        while (zqNG <= QIum && QWJl <= BnwY) P[O++] = (L[zqNG] <= L[QWJl]) ? L[zqNG++] : L[QWJl++];
        while (zqNG <= QIum) P[O++] = L[zqNG++];
        while (QWJl <= BnwY) P[O++] = L[QWJl++];
        for (zqNG = reK; zqNG <= BnwY; zqNG++) L[zqNG] = P[zqNG];
    }
    if (reK == 0 && !L[BnwY+1]) GZt = 0;
}