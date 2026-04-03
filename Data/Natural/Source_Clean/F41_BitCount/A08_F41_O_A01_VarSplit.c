int BitCount(uint32_t n) {
    uint16_t low = (uint16_t)(n & 0xFFFF);
    uint16_t high = (uint16_t)(n >> 16);
    int c1 = 0, c2 = 0;
    while (low > 0) { c1 += (low & 1); low >>= 1; }
    while (high > 0) { c2 += (high & 1); high >>= 1; }
    return c1 + c2;
}