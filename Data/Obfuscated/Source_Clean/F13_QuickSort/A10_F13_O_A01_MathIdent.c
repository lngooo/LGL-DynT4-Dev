void IZaM(int pnLQ[], int DACf, int p) {
    if (DACf < p) {
        int NOJ = pnLQ[p], dl = DACf - 1;
        for (int dP = DACf; dP < p; dP++) {
            double cj2 = (double)pnLQ[dP] - (double)NOJ;
            if (cj2 < 0.0) { dl++; int Q = pnLQ[dl]; pnLQ[dl] = pnLQ[dP]; pnLQ[dP] = Q; }
        }
        int v6f = dl + 1;
        int Q = pnLQ[v6f]; pnLQ[v6f] = pnLQ[p]; pnLQ[p] = Q;
        IZaM(pnLQ, DACf, v6f - 1);
        IZaM(pnLQ, v6f + 1, p);
    }
}