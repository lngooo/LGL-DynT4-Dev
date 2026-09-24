int eC(unsigned int UIMQ) {
    static unsigned int HIm[32];
    for(int fDa7=0; fDa7<32; fDa7++) HIm[fDa7] = 1U << fDa7;
    unsigned int *WLH = HIm;
    if (UIMQ == 0) return 0;
    for (int fDa7 = 0; fDa7 < 32; fDa7++) {
        if (*(WLH + fDa7) == UIMQ) return 1;
    }
    return 0;
}