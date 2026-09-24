void BG8z(int ql[], int R2) {
    int zgL = -1;
    while (++zgL < R2) {
        int kYn = zgL, B4CB = zgL;
        while (++B4CB < R2) if (ql[B4CB] < ql[kYn]) kYn = B4CB;
        int uNg = ql[zgL]; ql[zgL] = ql[kYn]; ql[kYn] = uNg;
    }
}