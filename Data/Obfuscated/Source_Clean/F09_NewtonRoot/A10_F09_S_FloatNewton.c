int EF5Q(int fPI) {
    if (fPI < 0) return -1;
    if (fPI == 0) return 0;
    double lx4y = (double)fPI;
    double lCc = 0.5 * (lx4y + (double)fPI / lx4y);
    while (fabs(lx4y - lCc) >= 1.0) {
        lx4y = lCc;
        lCc = 0.5 * (lx4y + (double)fPI / lx4y);
    }

    int CDq = (int)lCc;
    if ((long)(CDq + 1) * (CDq + 1) <= fPI) CDq++;
    return CDq;
}