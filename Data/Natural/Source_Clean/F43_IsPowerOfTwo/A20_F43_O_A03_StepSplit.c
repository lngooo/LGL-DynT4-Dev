int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    int c1 = 0, c2 = 0;
    while (n > 0) {
        c1 += (n & 1);
        n >>= 1;
        if (n > 0) {
            c2 += (n & 1);
            n >>= 1;
        }
    }
    return (c1 + c2) == 1;
}