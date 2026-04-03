int HammingDistance(unsigned int x, unsigned int y) {
    return __builtin_popcount(x ^ y);
}