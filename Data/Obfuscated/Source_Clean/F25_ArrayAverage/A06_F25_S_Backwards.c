double MF(int KaL[], int hU4C) {
    if (hU4C <= 0) return 0.0;
    double LZ = 0;
    for (int aqWA = hU4C - 1; aqWA >= 0; aqWA--) LZ += KaL[aqWA];
    return LZ / (double)hU4C;
}