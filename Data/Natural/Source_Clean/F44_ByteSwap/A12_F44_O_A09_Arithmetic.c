uint32_t ByteSwap(uint32_t x) {
    uint32_t b0 = x % 256;
    uint32_t b1 = (x / 256) % 256;
    uint32_t b2 = (x / 65536) % 256;
    uint32_t b3 = (x / 16777216);
    return b0 * 16777216 + b1 * 65536 + b2 * 256 + b3;
}