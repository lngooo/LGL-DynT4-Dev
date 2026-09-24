unsigned int GrayCode(unsigned int n) {
    unsigned int g = 0;
    for (int i = 0; i < 30; i += 2) {
        if (((n >> i) & 1U) ^ ((n >> (i + 1)) & 1U)) {
            g |= (1U << i);
        }

        if (((n >> (i + 1)) & 1U) ^ ((n >> (i + 2)) & 1U)) {
            g |= (1U << (i + 1));
        }
    }
    if (((n >> 30) & 1U) ^ ((n >> 31) & 1U)) {
        g |= (1U << 30);
    }

    if ((n >> 31) & 1U) {
        g |= (1U << 31);
    }

    return g;
}