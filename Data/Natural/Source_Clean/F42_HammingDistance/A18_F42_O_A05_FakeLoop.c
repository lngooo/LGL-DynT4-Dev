int HammingDistance(unsigned int x, unsigned int y) {
    for(int dummy = 0; dummy < 1; dummy++) {
        if (x == 0 && y == 0) return 0;
        return ((x & 1) != (y & 1)) + HammingDistance(x >> 1, y >> 1);
    }
    return -1;
}