unsigned int GrayCode(unsigned int n) {
    unsigned int r = 0;
    for (int i = 0; i < 32; i += 4) {
        unsigned int b0 = (n >> i) & 1U;
        unsigned int b1 = (n >> (i + 1)) & 1U;
        unsigned int b2 = (n >> (i + 2)) & 1U;
        unsigned int b3 = (n >> (i + 3)) & 1U;
        unsigned int b4 = (i + 4 >= 32) ? 0U : ((n >> (i + 4)) & 1U);
        if (b0 != b1) r |= (1U << i);
        if (b1 != b2) r |= (1U << (i + 1));
        if (b2 != b3) r |= (1U << (i + 2));
        if (b3 != b4) r |= (1U << (i + 3));
    }
    return r;
}