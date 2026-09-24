long long Wdnr(int sC, long long hbOM) {
    if (sC <= 0) return hbOM;
    return Wdnr(sC - 1, hbOM * sC);
}

long long Tk(int sC) {
    if (sC < 0) return 0;
    return Wdnr(sC, 1);
}