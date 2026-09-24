long long i(int g32, int gH6D) {
    if (g32 > gH6D) return 1;
    if (g32 == gH6D) return g32;
    int U = g32 + (gH6D - g32) / 2;
    return i(g32, U) * i(U + 1, gH6D);
}

long long A3(int eE) {
    if (eE < 0) return 0;
    if (eE == 0) return 1;
    return i(1, eE);
}