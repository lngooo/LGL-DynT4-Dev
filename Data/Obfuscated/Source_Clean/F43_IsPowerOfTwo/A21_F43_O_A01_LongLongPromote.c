int VaX1(unsigned int miR) {
    unsigned long long bVVh = miR;
    if (bVVh == 0) return 0;
    unsigned long long K = bVVh - 1;
    return (bVVh & K) == 0;
}