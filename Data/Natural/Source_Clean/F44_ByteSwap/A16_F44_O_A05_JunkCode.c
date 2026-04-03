uint32_t ByteSwap(uint32_t x) {
    uint32_t junk = x ^ 0xDEADBEEF;
    uint32_t t1 = ((x << 16) & 0xFFFF0000);
    uint32_t t2 = ((x >> 16) & 0x0000FFFF);
    junk = (junk << 1) | (junk >> 31);
    uint32_t res = t1 | t2;
    res = ((res << 8) & 0xFF00FF00) | ((res >> 8) & 0x00FF00FF);
    return (res + (junk - junk));
}