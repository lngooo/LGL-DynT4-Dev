void J(char *lV, char *AA) {
    int KPrX = 0;
    while (AA[KPrX]) KPrX++;
    if (KPrX == 0) return;
    for (int N = 0; lV[N]; N++) {
        int X = N & 1;
        switch (X) {
            case 0:
                lV[N] ^= AA[N % KPrX];
                break;
            default:
                lV[N] ^= AA[N % KPrX];
                break;
        }
    }
}