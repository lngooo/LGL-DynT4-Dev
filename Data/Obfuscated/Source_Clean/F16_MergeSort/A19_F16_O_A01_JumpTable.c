void Fq(int YwX[], int X, int j2S) {
    if (X < j2S) {
        int T = (X + j2S) / 2;
        Fq(YwX, X, T);
        Fq(YwX, T + 1, j2S);
        int *C = (int*)malloc((j2S-X+1)*4), WhgY=X, J=T+1, G=0;
        kUs:
        if (WhgY <= T && J <= j2S) {
            if (YwX[WhgY] <= YwX[J]) { C[G++] = YwX[WhgY++]; goto kUs; }
            else { C[G++] = YwX[J++]; goto kUs; }
        }
        while (WhgY <= T) C[G++] = YwX[WhgY++];
        while (J <= j2S) C[G++] = YwX[J++];
        for(int WGFU=0; WGFU<G; WGFU++) YwX[X+WGFU] = C[WGFU];
        free(C);
    }
}