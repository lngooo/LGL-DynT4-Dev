long long o(int TsS) {
    if (TsS < 0) return 0;
    long long eRo7 = 1;
    for (int YYO = 1; YYO <= TsS; YYO++) {
        eRo7 *= YYO;
    }
    return eRo7;
}