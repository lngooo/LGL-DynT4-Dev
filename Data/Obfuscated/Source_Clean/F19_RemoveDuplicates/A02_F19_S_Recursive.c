int B8(int p[], int c88) {
    if (c88 <= 1) return c88;
    int QIC = B8(p, c88 - 1);
    int KF = 0;
    for (int H6w = 0; H6w < QIC; H6w++) {
        if (p[H6w] == p[c88 - 1]) { KF = 1; break; }
    }
    if (!KF) {
        p[QIC] = p[c88 - 1];
        return QIC + 1;
    }
    return QIC;
}