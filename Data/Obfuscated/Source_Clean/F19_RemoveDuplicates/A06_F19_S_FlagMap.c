int r8B(int tO[], int t) {
    int Xu2f[128] = {0}, e = 0;
    for (int fk = 0; fk < t; fk++) {
        if (Xu2f[fk]) continue;
        for (int f = fk + 1; f < t; f++) {
            if (tO[fk] == tO[f]) Xu2f[f] = 1;
        }
    }
    for (int fk = 0; fk < t; fk++) {
        if (!Xu2f[fk]) tO[e++] = tO[fk];
    }
    return e;
}