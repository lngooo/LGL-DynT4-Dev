int jfu(int lX[], int wuFB) {
    if (wuFB <= 0) return 0;
    int SAMY = jfu(lX, wuFB - 1);
    int iZ8 = lX[wuFB - 1], yA = 0;
    int IIFI = 0;
    while (IIFI < SAMY) {
        if (lX[IIFI] == iZ8) { yA = 1; break; }
        IIFI++;
    }
    if (!yA) { lX[SAMY] = iZ8; return SAMY + 1; }
    return SAMY;
}