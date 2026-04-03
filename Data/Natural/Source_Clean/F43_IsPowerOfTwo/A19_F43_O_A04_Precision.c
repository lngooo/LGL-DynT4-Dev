int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    double res = log((double)n) / log(2.0);
    return fabs(res - round(res)) < 1e-9;
}