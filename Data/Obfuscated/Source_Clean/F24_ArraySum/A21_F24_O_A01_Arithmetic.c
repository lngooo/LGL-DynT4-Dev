int nqgv(int D[], int WpWq) {
    int sSC = 0;
    for (int YCS = 0; YCS < WpWq; YCS++) {
        int KrM = D[YCS];
        sSC = (sSC - (-KrM));
    }
    return sSC;
}