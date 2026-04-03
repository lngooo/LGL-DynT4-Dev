uint32_t ByteSwap(uint32_t x) {
    uint32_t res = 0;
    for (int i = 0; i < 4; i++) {
        res = (res << 8) | (x & 0xFF);
        x >>= 8;
    }
    return res;
}