void mR(int jWU[], int h, int p) {
    if (h < p) {
        int sa = jWU[h];
        int SZh = h - 1, CEb = p + 1;
        while (1) {
            do { SZh++; } while (jWU[SZh] < sa);
            do { CEb--; } while (jWU[CEb] > sa);
            if (SZh >= CEb) break;
            int nVI = jWU[SZh]; jWU[SZh] = jWU[CEb]; jWU[CEb] = nVI;
        }
        mR(jWU, h, CEb);
        mR(jWU, CEb + 1, p);
    }
}