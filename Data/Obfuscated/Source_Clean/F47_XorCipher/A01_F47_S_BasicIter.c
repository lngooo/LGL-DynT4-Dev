void Ld(char *XvWM, char *u63N) {
    int dh = 0; while (u63N[dh]) dh++;
    for (int p9 = 0; XvWM[p9] != '\0'; p9++) {
        XvWM[p9] ^= u63N[p9 % dh];
    }
}