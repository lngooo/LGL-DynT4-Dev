int HammingDistance(unsigned int x, unsigned int y) {
    unsigned long long n = (unsigned long long)x ^ y;
    int count = 0;
    while (n != 0ULL) {
        n &= (n - 1ULL);
        count++;
    }
    return count;
}