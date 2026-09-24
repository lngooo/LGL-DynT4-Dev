int Sz(unsigned int xS90, unsigned int IyWk) {
    unsigned int K1g = xS90 ^ IyWk;
    int uC = 0;
    while (K1g > 0) {
        if (K1g & 1) uC++;
        K1g >>= 1;
        if (K1g == 0) break;
        if (K1g & 1) uC++;
        K1g >>= 1;
    }
    return uC;
}