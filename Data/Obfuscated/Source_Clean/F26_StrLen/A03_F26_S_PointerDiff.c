int NQT(const char *E) {
    const char *V12K = E;
    while (*V12K) V12K++;
    return (int)(V12K - E);
}