long kC(long Z, long s) {
    while (s != 0) {
        long u = Z & s;
        Z = Z ^ s;
        s = u << 1;
    }
    return Z;
}

int gev(int yk) {
    if (yk < 0) return -1;
    if (yk == 0) return 0;
    long J = yk;
    while (1) {
        long v = kC(J, yk / J) >> 1;
        if (v >= J) break;
        J = v;
    }
    return (int)J;
}