int BI(int Rfja[], int TLq) {
    int G0 = 0, BdDs = 0, h = 0;
    while (G0 != 2) {
        switch (G0) {
            case 0: G0 = (BdDs < TLq) ? 1 : 2; break;
            case 1: h += Rfja[BdDs++]; G0 = 0; break;
        }
    }
    return h;
}