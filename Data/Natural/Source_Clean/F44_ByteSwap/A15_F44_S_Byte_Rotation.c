uint32_t ByteSwap(uint32_t x) {
    uint32_t rotated = ((x << 8) & 0xFF00FF00) | ((x >> 8) & 0x00FF00FF);
    return (rotated << 16) | (rotated >> 16);
}