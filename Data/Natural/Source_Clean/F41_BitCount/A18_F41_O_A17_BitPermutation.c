int BitCount(uint32_t n) {
    uint32_t m1 = 0x55555555;
    n = n - ((n >> 1) & m1);
    n = (n & 0x33333333) + ((n >> 2) & 0x33333333);
    n = (n + (n >> 4)) & 0x0F0F0F0F;
    n = n + (n >> 8);
    n = n + (n >> 16);
    return n & 0x3F;
}