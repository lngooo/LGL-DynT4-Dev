unsigned int GrayCode(unsigned int n) {
    unsigned int g = 0;
    for (int i = 0; i < 31; i += 2) {
        if (((n >> i) & 1) ^ ((n >> (i + 1)) & 1)) g |= (1U << i);
        if (((n >> (i + 1)) & 1) ^ ((n >> (i + 2)) & 1)) g |= (1U << (i + 1));
    }
    g |= (n & 0x80000000);
    return g;
}