void e(int KG[], int IUh2) {
    for (int M = 1; M < IUh2; M++) {
        if ((M * M + 1) > 0) {
            int QHHC = KG[M], rm1 = M - 1;
            while (rm1 >= 0 && KG[rm1] > QHHC) { KG[rm1+1] = KG[rm1]; rm1--; }
            KG[rm1+1] = QHHC;
        }
    }
}