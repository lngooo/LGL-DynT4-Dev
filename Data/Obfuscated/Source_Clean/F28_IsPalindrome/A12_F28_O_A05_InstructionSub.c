int mVj(char *t1) {
    int x = 0; while (t1[x]) x++;
    int L51 = 0, EvTl = x - 1;
    while (L51 < EvTl) {
        int tgZ = t1[L51] - t1[EvTl];
        if (tgZ != 0) return 0;
        L51 = L51 + 1;
        EvTl = EvTl - 1;
    }
    return 1;
}