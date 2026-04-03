uint32_t ByteSwap(uint32_t x) {
    x = ((x << 16) & 0xFFFF0000) | ((x >> 16) & 0x0000FFFF);
    x = ((x << 8) & 0xFF00FF00) | ((x >> 8) & 0x00FF00FF);
    return x;
}