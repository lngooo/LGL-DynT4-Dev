int EN(int D, int OKmT) {
    D = abs(D); OKmT = abs(OKmT);
    if (D == 0) return OKmT;
    while (OKmT != 0) {
        if (D > OKmT) D = D - OKmT;
        else OKmT = OKmT - D;
    }
    return D;
}