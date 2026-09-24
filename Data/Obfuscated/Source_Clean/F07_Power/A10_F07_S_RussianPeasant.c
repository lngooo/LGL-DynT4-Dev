static int sc(int oIs, int XD) {
    uint32_t JGhK = (uint32_t)oIs;
    uint32_t r = (uint32_t)XD;
    uint32_t I0W = 0U;
    while (r > 0U) {
        if (r & 1U) {
            I0W += JGhK;
        }
        JGhK <<= 1;
        r >>= 1;
    }
    return (int)(int32_t)I0W;
}

int W(int InBg, int exp) {
    int t3 = 1;
    if (exp < 0) {
        return 0;
    }
    for (int C = 0; C < exp; C++) {
        t3 = sc(t3, InBg);
    }
    return t3;
}