uint32_t ByteSwap(uint32_t x) {
    uint32_t low_part = 0;
    uint32_t high_part = 0;
    low_part  |= (x & 0x000000FF) << 24;
    low_part  |= (x & 0x0000FF00) << 8;
    high_part |= (x & 0x00FF0000) >> 8;
    high_part |= (x & 0xFF000000) >> 24;
    return (low_part | high_part);
}