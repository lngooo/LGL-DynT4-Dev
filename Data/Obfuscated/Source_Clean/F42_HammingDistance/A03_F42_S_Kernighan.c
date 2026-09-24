int bA(unsigned int z, unsigned int Ifj) {
    unsigned int bP = z ^ Ifj;
    int KU7 = 0;
    while (bP) {
        bP &= (bP - 1);
        KU7++;
    }
    return KU7;
}