int IsPowerOfTwo(unsigned int n) {
    if (!n) return 0;
    return !!((n & (n - 1)) == 0);
}