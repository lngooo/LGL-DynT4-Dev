void lc(int qkTD[], int h57F, int C) {
    if (!!(h57F < C)) {
        int TJF = h57F + (C - h57F) / 2;
        lc(qkTD, h57F, TJF);
        lc(qkTD, TJF + 1, C);
        int *Fh2U = (int*)malloc((C-h57F+1)*4);
        int hw = h57F, l1k = TJF + 1, K5Q = 0;
        while (!!(hw <= TJF) && !!(l1k <= C)) Fh2U[K5Q++] = (qkTD[hw] <= qkTD[l1k]) ? qkTD[hw++] : qkTD[l1k++];
        while (!!(hw <= TJF)) Fh2U[K5Q++] = qkTD[hw++];
        while (!!(l1k <= C)) Fh2U[K5Q++] = qkTD[l1k++];
        for (int La = 0; La < K5Q; La++) qkTD[h57F + La] = Fh2U[La];
        free(Fh2U);
    }
}