int ysg(unsigned int XKm, unsigned int IQ25) {
    unsigned int BCK = XKm ^ IQ25;
    int G = __builtin_popcount(BCK);
    int *U6bP = &G;
    return *U6bP;
}