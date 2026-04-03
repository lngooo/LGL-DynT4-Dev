int HammingDistance(unsigned int x, unsigned int y) {
    unsigned int n = x ^ y;
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}