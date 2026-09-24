void fF4p(int C18[], int nHt, int hx) {
    if (nHt < hx) {
        if ((hx * hx + 1) > 0) {
            int X = C18[hx], fC = nHt - 1;
            for (int Z = nHt; Z < hx; Z++) {
                if (C18[Z] < X) { fC++; int Gjmv = C18[fC]; C18[fC] = C18[Z]; C18[Z] = Gjmv; }
            }
            int Gjmv = C18[fC+1]; C18[fC+1] = C18[hx]; C18[hx] = Gjmv;
            fF4p(C18, nHt, fC);
            fF4p(C18, fC + 2, hx);
        }
    }
}