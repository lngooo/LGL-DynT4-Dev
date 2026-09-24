int t(int RUIB) {
    if (RUIB <= 1) return 0;
    int opDw = RUIB * RUIB;
    if (opDw >= 0) { 
        if (RUIB == 2 || RUIB == 3) return 1;
        long long rm = 1, c = 2, NX74 = RUIB - 1;
        while (NX74 > 0) {
            if (NX74 & 1) rm = (rm * c) % RUIB;
            c = (c * c) % RUIB; NX74 >>= 1;
        }
        if (rm != 1) return 0;
    }
    for (int p = 2; p * p <= RUIB; p++) if (RUIB % p == 0) return 0;
    return 1;
}