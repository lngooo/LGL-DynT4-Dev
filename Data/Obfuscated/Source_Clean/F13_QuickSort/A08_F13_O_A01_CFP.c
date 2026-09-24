void D1(int fUGh[], int XL, int zA) {
    int Cbl = 0;
    while (Cbl != 2) {
        switch (Cbl) {
            case 0: if (XL < zA) Cbl = 1; else Cbl = 2; break;
            case 1: {
                int L5T5 = fUGh[zA], Df = XL - 1;
                for (int uSP = XL; uSP < zA; uSP++) {
                    if (fUGh[uSP] < L5T5) { Df++; int TU = fUGh[Df]; fUGh[Df] = fUGh[uSP]; fUGh[uSP] = TU; }
                }
                int TU = fUGh[Df+1]; fUGh[Df+1] = fUGh[zA]; fUGh[zA] = TU;
                D1(fUGh, XL, Df);
                D1(fUGh, Df + 2, zA);
                Cbl = 2; break;
            }
        }
    }
}