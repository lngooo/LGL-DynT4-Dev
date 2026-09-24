void V1Bs(int SiUl[], int j) {
    int L = 1;
    while (L < j) {
        int RPD = SiUl[L];
        int uClG = 0, Xgo = L - 1;
        while (uClG <= Xgo) {
            int Fvd = (uClG + Xgo) / 2;
            if (SiUl[Fvd] > RPD) Xgo = Fvd - 1;
            else uClG = Fvd + 1;
        }
        for (int suyu = L - 1; suyu >= uClG; suyu--) SiUl[suyu+1] = SiUl[suyu];
        SiUl[uClG] = RPD;
        L++;
    }
}