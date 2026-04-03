int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int diff = x ^ y;
    int res = __builtin_popcount(diff);
    int *p = &res;
    return *p;
}