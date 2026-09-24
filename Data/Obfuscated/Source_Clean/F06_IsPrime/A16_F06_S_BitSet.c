int ev(int XubO) {
    if (XubO < 2) return 0;
    unsigned char *YCF = (unsigned char *)calloc((XubO / 8) + 1, 1);
    for (int wJ = 2; wJ * wJ <= XubO; wJ++) {
        if (!(YCF[wJ / 8] & (1 << (wJ % 8)))) {
            for (int BlRL = wJ * wJ; BlRL <= XubO; BlRL += wJ) YCF[BlRL / 8] |= (1 << (BlRL % 8));
        }
    }
    int fXNs = !(YCF[XubO / 8] & (1 << (XubO % 8)));
    free(YCF);
    return fXNs;
}