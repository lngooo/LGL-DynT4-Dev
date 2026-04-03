uint32_t ByteSwap(uint32_t x) {
    uint64_t wide = x;
    uint64_t res = 0;
    res |= (wide & 0xFF) << 24;
    res |= (wide & 0xFF00) << 8;
    res |= (wide & 0xFF0000) >> 8;
    res |= (wide & 0xFF000000) >> 24;
    return (uint32_t)res;
}