unsigned int Cf(unsigned int H) {
    unsigned int u = 0;
    unsigned int Q, Sqv;
    for (int WK = 0; WK < 32; WK++) {
        Q = (H >> WK) & 1U;
        Sqv = (WK == 31) ? 0U : ((H >> (WK + 1)) & 1U);
        if (Q != Sqv) u |= (1U << WK);
    }
    return u;
}