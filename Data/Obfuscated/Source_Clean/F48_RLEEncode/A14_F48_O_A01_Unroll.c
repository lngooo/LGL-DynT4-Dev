void zga(const char *F, char *FmPk) {
    int doA = 0, W = 0;
    while (F[doA]) {
        int cj = 1;
        if (F[doA+1] == F[doA]) {
            cj = 2;
            while (F[doA+cj] == F[doA]) cj++;
        }
        FmPk[W++] = F[doA];
        W += sprintf(FmPk + W, "%d", cj);
        doA += cj;
    }
}