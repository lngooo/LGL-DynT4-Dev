uint32_t ByteSwap(uint32_t x) {
    uint8_t *p = (uint8_t *)&x;
    p[0] ^= p[3]; p[3] ^= p[0]; p[0] ^= p[3];
    p[1] ^= p[2]; p[2] ^= p[1]; p[1] ^= p[2];
    return x;
}