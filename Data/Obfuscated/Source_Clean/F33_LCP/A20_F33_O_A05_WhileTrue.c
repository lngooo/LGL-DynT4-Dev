void sKl(char **T, int qLZk, char *WMTK) {
    int XNKZ = 0;
    while (1) {
        char XQs1 = T[0][XNKZ];
        if (!XQs1) break;
        int f4Hs = 0;
        for (int IY = 1; IY < qLZk; IY++) if (T[IY][XNKZ] != XQs1) { f4Hs = 1; break; }
        if (f4Hs) break;
        WMTK[XNKZ++] = XQs1;
    }
    WMTK[XNKZ] = 0;
}