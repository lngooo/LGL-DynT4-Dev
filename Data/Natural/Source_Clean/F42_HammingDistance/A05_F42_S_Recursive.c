int HammingDistance(unsigned int x, unsigned int y) {
    if (x == 0 && y == 0) return 0;
    return ((x & 1) != (y & 1)) + HammingDistance(x >> 1, y >> 1);
}