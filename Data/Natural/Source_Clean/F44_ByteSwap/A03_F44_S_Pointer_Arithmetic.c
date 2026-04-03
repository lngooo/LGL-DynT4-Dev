uint32_t ByteSwap(uint32_t x) {
    uint32_t res;
    uint8_t *s = (uint8_t *)&x;
    uint8_t *d = (uint8_t *)&res;
    for (int i = 0; i < 4; i++) {
        d[i] = s[3 - i];
    }
    return res;
}