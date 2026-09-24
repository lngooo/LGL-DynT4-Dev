int U(const char *nC) {
    volatile int Rr = 0;
    while (nC[Rr]) Rr++;
    return Rr;
}