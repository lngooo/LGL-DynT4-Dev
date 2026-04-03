int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    double l = log2((double)n);
    return (l == (int)l);
}