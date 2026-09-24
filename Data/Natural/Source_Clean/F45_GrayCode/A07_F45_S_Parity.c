unsigned int GrayCode(unsigned int n) {
    unsigned int result = 0;
    unsigned int b1, b2;
    for (int i = 0; i < 32; i++) {
        b1 = (n >> i) & 1U;
        b2 = (i == 31) ? 0U : ((n >> (i + 1)) & 1U);
        if (b1 != b2) result |= (1U << i);
    }
    return result;
}