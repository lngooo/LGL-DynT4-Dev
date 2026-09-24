int dH2(unsigned int x) {
    unsigned int Mfq = 2147483648U;
    return (x > 0 && Mfq % x == 0);
}