int P9t(int pZZR) {
    int tDeS = 0, k = 0x40000000;
    while (k > pZZR) k >>= 2;
    while (k) {
        int AEDn = tDeS | k;
        if (pZZR >= AEDn) {
            pZZR -= AEDn;
            tDeS = (tDeS >> 1) | k;
        } else tDeS >>= 1;
        k >>= 2;
    }
    return tDeS;
}