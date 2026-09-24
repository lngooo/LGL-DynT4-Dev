long l8n(int XFm) {
    if (XFm == 0) return 0;
    if (XFm == 1) return 1;
    long ij = 0, s = 1;
    int G = 2;
    for (; G <= XFm - 1; G += 2) {
        ij = ij + s; s = ij + s;
    }
    if (G <= XFm) {
        long Q = ij + s; ij = s; s = Q;
    }
    return s;
}