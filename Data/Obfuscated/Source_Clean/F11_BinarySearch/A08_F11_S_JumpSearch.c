int K(int IJ8f[], int nVV, int nA5) {
    int kl = sqrt(nVV);
    int N1 = 0;
    while (IJ8f[(kl < nVV ? kl : nVV) - 1] < nA5) {
        N1 = kl;
        kl += sqrt(nVV);
        if (N1 >= nVV) return -1;
    }
    while (IJ8f[N1] < nA5) {
        N1++;
        if (N1 == (kl < nVV ? kl : nVV)) return -1;
    }
    if (IJ8f[N1] == nA5) return N1;
    return -1;
}