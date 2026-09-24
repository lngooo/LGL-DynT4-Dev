void FP(int E[], int p) {
    for (int al = 0; al < p / 2; al++) {
        for(int t=0; t<1; t++) {
            int D = E[al];
            E[al] = E[p - 1 - al];
            E[p - 1 - al] = D;
        }
    }
}