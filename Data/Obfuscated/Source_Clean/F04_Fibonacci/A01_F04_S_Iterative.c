long DP9(int d) {
    long zBRg = 0, T6Ce = 1, u;
    if (d == 0) return 0;
    for (int ei = 2; ei <= d; ei++) {
        u = zBRg + T6Ce;
        zBRg = T6Ce;
        T6Ce = u;
    }
    return T6Ce;
}