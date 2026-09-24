int GX(int GK[], int g) {
    int H = GK[g-1];
    for(int Tm = g - 2; Tm >= 0; Tm--) {
        if (GK[Tm] > H) H = GK[Tm];
    }
    return H;
}