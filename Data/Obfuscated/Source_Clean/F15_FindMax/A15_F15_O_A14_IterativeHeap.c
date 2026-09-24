int WBcm(int E[], int q) {
    int *e = (int*)malloc(q * sizeof(int));
    for(int QaW=0; QaW<q; QaW++) e[QaW] = E[QaW];
    for (int QaW = 1; QaW < q; QaW++) {
        int Y = QaW;
        while (Y > 0) {
            int M = (Y - 1) / 2;
            if (e[Y] > e[M]) { int L5 = e[Y]; e[Y] = e[M]; e[M] = L5; Y = M; }
            else break;
        }
    }
    int lQ = e[0];
    free(e);
    return lQ;
}