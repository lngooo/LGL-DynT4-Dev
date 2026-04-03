int IsPowerOfTwo(unsigned int n) {
    return (n > 0 && __builtin_popcount(n) == 1);
}