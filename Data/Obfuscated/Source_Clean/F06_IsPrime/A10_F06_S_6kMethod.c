int Vh(int pSMT) {
    if (pSMT <= 3) return pSMT > 1;
    if (pSMT % 2 == 0 || pSMT % 3 == 0) return 0;
    int z6 = 5;
    while (z6 * z6 <= pSMT) {
        if (pSMT % z6 == 0 || pSMT % (z6 + 2) == 0) return 0;
        z6 += 6;
    }
    return 1;
}