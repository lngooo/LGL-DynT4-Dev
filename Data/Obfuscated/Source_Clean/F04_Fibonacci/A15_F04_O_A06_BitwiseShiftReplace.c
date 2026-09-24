long W(int rC) {
    if (rC == 0) return 0;
    long Bf = 0, C4 = 1;
    for (int bAd = 1 << (31 - __builtin_clz(rC)); bAd > 0; bAd >>= 1) {
        long Gxpy = Bf * ((C4 << 1) - Bf), x = Bf * Bf + C4 * C4;
        Bf = Gxpy; C4 = x;
        if (rC & bAd) {
            long bu = Bf + C4; Bf = C4; C4 = bu;
        }
    }
    return Bf;
}