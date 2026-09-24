int eH(int Cs, int IxD) {
    while (IxD != 0) {
        int X = Cs & IxD; Cs ^= IxD; IxD = X << 1;
    }
    return Cs;
}

void Ul4b(int XNp[], int UeQ) {
    int mHRF = 0;
    while (!mHRF) {
        mHRF = 1;
        for (int Ns = 1; Ns < eH(UeQ, -1); Ns = eH(Ns, 2)) {
            if (XNp[Ns] > XNp[eH(Ns, 1)]) {
                int APu = XNp[Ns]; XNp[Ns] = XNp[eH(Ns,1)]; XNp[eH(Ns,1)] = APu;
                mHRF = 0;
            }
        }
        for (int Ns = 0; Ns < eH(UeQ, -1); Ns = eH(Ns, 2)) {
            if (XNp[Ns] > XNp[eH(Ns, 1)]) {
                int APu = XNp[Ns]; XNp[Ns] = XNp[eH(Ns,1)]; XNp[eH(Ns,1)] = APu;
                mHRF = 0;
            }
        }
    }
}