void H9RN(int Ap[], int Bt, int CIi) {
    if (Bt < CIi) {
        int Pi = Bt + (CIi - Bt) / 2;
        if (Ap[Pi] < Ap[Bt]) { int it = Ap[Pi]; Ap[Pi] = Ap[Bt]; Ap[Bt] = it; }
        if (Ap[CIi] < Ap[Bt]) { int it = Ap[CIi]; Ap[CIi] = Ap[Bt]; Ap[Bt] = it; }
        if (Ap[CIi] < Ap[Pi]) { int it = Ap[CIi]; Ap[CIi] = Ap[Pi]; Ap[Pi] = it; }
        int B6 = Ap[Pi];
        int P7 = Bt, ue = CIi;
        while (P7 <= ue) {
            while (Ap[P7] < B6) P7++;
            while (Ap[ue] > B6) ue--;
            if (P7 <= ue) {
                int it = Ap[P7]; Ap[P7] = Ap[ue]; Ap[ue] = it;
                P7++; ue--;
            }
        }
        if (Bt < ue) H9RN(Ap, Bt, ue);
        if (P7 < CIi) H9RN(Ap, P7, CIi);
    }
}