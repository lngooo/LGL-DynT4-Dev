int BitCount(uint32_t n) {
    if (n == 0) return 0;
    return 1 + BitCount(n & (n - 1));
}