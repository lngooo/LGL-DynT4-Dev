uint32_t ByteSwap(uint32_t x) {
    uint32_t res = 0;
    uint32_t b;
    b = (x >> 0) & 0xFF; res |= (b << 24);
    b = (x >> 8) & 0xFF; res |= (b << 16);
    b = (x >> 16) & 0xFF; res |= (b << 8);
    b = (x >> 24) & 0xFF; res |= (b << 0);
    return res;
}