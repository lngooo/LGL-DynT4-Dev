uint32_t ByteSwap(uint32_t x) {
    uint32_t r0, r1, r2, r3;
    r0 = (x >> 0) & 0xFF;
    r1 = (x >> 8) & 0xFF;
    r2 = (x >> 16) & 0xFF;
    r3 = (x >> 24) & 0xFF;
    return (r0 << 24) | (r1 << 16) | (r2 << 8) | r3;
}